#include<bits/stdc++.h>
using namespace std;
int qhd(int n,int v,int a[]){
	int f[500][500];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=v;j++){
			if(i==0||j==0) f[i][j] =0;
			else{
				f[i][j] =f[i-1][j];
				if(j>=a[i]){
					f[i][j] = min(f[i][j],f[i-1][j-a[i]]+i);
				}
			}
		}
	}
	return f[n][v];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m,Q, t[9005],N[9005];
		cin >> m>>Q;
		for(int i = 1; i <= m; i++) cin >> t[i];
		for(int i = 1; i <= Q; i++) cin >> N[i];
		int k = 0;
		while(++k<=Q){
			cout <<qhd(m,N[k],t)<<endl;
		}
	}
	return 0;
}

