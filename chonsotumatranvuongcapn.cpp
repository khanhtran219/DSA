#include <bits/stdc++.h>
using namespace std;
int n,k,a[100][100], b[100], cot[100],res[100][100],dem = 0;
void inKQ(){
	for(int i = 1; i <= n; i++){
		cout <<a[i][b[i]]<<" ";
	}
	cout << endl;
}
bool check(){
	int s = 0;
	for(int i = 1; i <= n;i++){
		s+= a[i][b[i]];
	}
	return s == k;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j]){
			b[i] = j;
			cot[j] = 0;
			if(i == n){
				if(check()){
					dem++;
					for(int l = 1; l <= n; l++){
						res[dem][l] = b[l];
					}
				}
			}else Try(i+1);
			cot[j] = 1;
		}
	}
}
int main(){
	cin >> n>>k;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	memset(cot,1,sizeof(cot));
	Try(1);
	cout <<dem<<endl;
	for(int i = 1; i <= dem; i++){
		for(int j = 1; j <= n; j++){
			cout <<res[i][j]<<" ";
		}
		cout <<endl;
	}
}
