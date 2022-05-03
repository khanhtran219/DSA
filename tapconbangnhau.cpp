#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n, int s){
	int f[s+1];
	memset(f,0,sizeof(f));
	int i,j;
	f[0] = 1;
	for(i=0;i<n;i++){
		for(j=s;j >= a[i];j--){
			if(f[j]==0 && f[j-a[i]]==1)
				f[j] = 1;
		}
	}
	return f[s];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[10000];
		cin >> n;
		int s = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s%2!=0) cout <<"NO"<<endl;
		else{
			if(qhd(a,n,s/2)) cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}
	}
	return 0;
}

