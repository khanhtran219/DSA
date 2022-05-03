#include<bits/stdc++.h>
using namespace std;
int f[1001][1001],a[1001],c[1001],n,v;
int qhd(){
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=v;j++){
			if(i==0||j==0) f[i][j] =0;
			else{
				f[i][j] =f[i-1][j];
				if(j>=a[i]){
					f[i][j] = max(f[i][j],f[i-1][j-a[i]]+c[i]);
				}
			}
		}
	}
	return f[n][v];
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		cin>>n>>v;
		for( i=1;i<=n;i++) cin >>a[i];
		for(i=1;i<=n;i++) cin >>c[i];
		cout<<qhd()<<endl;
	}
	return 0;
}

