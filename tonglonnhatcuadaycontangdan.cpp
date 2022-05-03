#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,j,kq;
	cin >>t;
	while(t--){
	cin >> n;
	int a[n],f[n],kq=0;
	for(i=0;i<n;i++) cin >>a[i];
	for(i=0;i<n;i++){
		f[i]=a[i];
		for(j = 0;j<i;j++){
			if(a[j]<a[i]){
				f[i] = max(f[i],f[j]+a[i]);
			}
		}
		kq = max(kq,f[i]);
	}
	cout <<kq<<endl;
	}
	return 0;
}

