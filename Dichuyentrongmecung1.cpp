#include <bits/stdc++.h>
using namespace std;
int n, a[11][11];
bool check;
vector<string> res;
void Try(int i, int j , string s){
	if(i == 0 && j == 0 && a[i][j] == 0){
		check = false;
		return;
	}
	if(i == n - 1 && j == n - 1 && a[i][j] == 1){
		res.push_back(s);
		check = true;
		return;
	}
	if(j < n-1&&a[i][j+1]==1){
		Try(i,j+1,s +"R");
	}
	if(i < n-1 &&a[i+1][j]==1){
		Try (i+1,j,s+"D");
	}
	if((i < n- 1 && j < n-1 && !a[i+1][j] && !a[i][j+1]) || i >=n || j >= n){
		return;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		check = false;
		res.clear();
		Try(0,0,"");
		if(!check){
			cout <<"-1"<<endl;
		}else{
			sort(res.begin(),res.end());
			for(int i = 0; i < res.size(); i++){
				cout <<res[i]<<" ";
			}
			cout<<endl;
		}
	}
}
