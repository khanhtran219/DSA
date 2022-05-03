#include<bits/stdc++.h>
using namespace std;
int C[1001][1001],mod=1e9+7;
int main(){
	int i,j;
	for(i = 0; i<=1000; i++){
		for(j=0;j<=i;j++){
			if(j==0||j==i) C[i][j]=1;
			else C[i][j] = (C[i-1][j-1] + C[i-1][j] )%mod;
		}
	}
	int n,t,k;
	cin >> t;
	while(t--){
		cin >> n>>k;
		cout <<C[n][k]<<endl;
	}
	return 0;
}

