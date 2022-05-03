#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,a[505][505];
		cin >> n>>m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int dp[n][m];
		dp[0][0]= a[0][0];
		for(int i = 1; i < n; i++) dp[i][0] = dp[i-1][0] + a[i][0];
		for(int i = 1; i < m; i++) dp[0][i] = dp[0][i-1] + a[0][i];
		for(int i = 1; i < n; i++){
			for(int j = 1; j < m; j++){
				dp[i][j] = min (dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + a[i][j];
			}
		}
		cout <<dp[n-1][m-1]<<endl;
	}
	return 0;
}

