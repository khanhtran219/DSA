#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
vector<int> ress;
int n,k,A[15],used[15],B[15],ress_size,res_size;
void makeVec(){
	int temp = 0;
	for(int i = 0; i <= k; i++) temp = temp*10 + A[B[i]];
	ress.push_back(temp);
}
void makArr(int temp){
	int i = k; while(temp){
		A[i--] = temp %10;
		temp /=10;
	}
}
void Try(int i){
	for(int j = 1; j <= k; j++){
		if(!used[j]){
			B[i] = j;
			if(i==k){
				makeVec();
			}else Try(i+1);
			used[j] = 0;
		}
	}
}
void timMin(){
	int maxx = INT_MAX;
	for(int i = 0; i < ress_size; i++){
		int j;
		for( j = 0; j < res_size; j++){
			A[j] = res[i][j];
		}
		sort(A,A+j);
		maxx = min(A[j-1]-A[0],maxx);
	}
	cout <<maxx;
}
int main(){
	cin >> n>>k;
	while(n--){
		int temp;
		cin >> temp;
		memset(B,0,sizeof(B));
		memset(A,0,sizeof(A));
		memset(used,0,sizeof(used));
		ress.clear();
		makeArr(temp);
		Try(1);
		res.push_back(ress);
		ress-size = ress.size();
		res_size = res.size();
		timMin();
	}
	
}
