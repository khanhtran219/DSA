#include<bits/stdc++.h>
using namespace std;
int a[1000001],f[1000001];
int main(){
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i<n;i++) cin >> a[i];
		f[0] =a[0];f[1]=max(a[0],a[1]);
		for(i=2; i<n;i++){
			f[i]=max(f[i-1],f[i-2]+a[i]);
		}
		cout<<f[n-1]<<endl;
	}
	return 0;
}

