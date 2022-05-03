#include <bits/stdc++.h>
using namespace std;
int n,a[100][100],dem;
vector<string> res;
void Try(int i, int j, string s){
	if(i== n && j == n){
		dem++;
		res.push_back(s);
		return;
	}
	if(i < n && a[i+1][j]==1){
		a[i+1][j] = 0;
		Try(i+1,j,s+"D");
		a[i+1][j] = 1;
	}
	if(j > 1 && a[i][j-1]==1){
		a[i][j-1] = 0;
		Try(i,j-1,s+"L");
		a[i][j-1] = 1;
	}
	if(j < n && a[i][j+1] == 1){
		a[i][j+1] = 0;
		Try(i,j+1,s+"R");
		a[i][j+1] = 1;
	}
	if(i > 1 && a[i-1][j]==1){
		a[i-1][j] = 0;
		Try(i-1,j,s+"U");
		a[i-1][j] = 1;
	}
	return;
}
int main(){
	int t; cin >> t;
	while(t--){
		res.clear();
		cin >> n;
		dem = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		if(a[1][1] == 0 || a[n][n] == 0) cout <<"-1"<<endl;
		else{
			a[1][1] = 0;
			Try(1,1,"");
			if(dem==0) cout <<"-1";
			else{
				cout <<dem<<" ";
				for(int i = 0; i < res.size(); i++){
					cout <<res[i]<<" ";
				}
			}
			cout <<endl;
		}
	}
}

