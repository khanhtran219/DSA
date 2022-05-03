#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k,ok=0;
		cin >> n>>k;
		int a[n+5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = n; i >= 1; i--){
			if(a[i] <= k){
				ok = 1;
				cout <<i<<endl;
				break;
			}
		}
		if(!ok) cout <<"-1"<<endl;
	}
}
