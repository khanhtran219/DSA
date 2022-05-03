#include <bits/stdc++.h>
using namespace std;
int search(long long a[],int n, long long x){
	for(int i = 0; i < n; i++){
		if(a[i] == x) return i;
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n1,n2,n3; cin >> n1>>n2>>n3;
		long long a[n1],b[n2],c[n3],ok = 0,s=-3;
		for(int i = 0; i < n1; i++) cin >> a[i];
		for(int i = 0; i < n2; i++) cin >> b[i];
		for(int i = 0; i < n3; i++) cin >> c[i];
		for(int i = 0; i < n1; i++){
			int m,n;
			m = search(b,n2-1,a[i]);
			n = search(c,n3-1,a[i]);
			if(m >= 0 && n >= 0){
				if(a[i] == s) break;
				s = a[i];
				ok = 1;
				cout <<a[i]<<" ";
			}
		}
		if(!ok) cout <<"-1";
		cout <<endl;
	}
}
