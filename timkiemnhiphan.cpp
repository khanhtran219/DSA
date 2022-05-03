#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k,ok=-1;
		cin >> n>>k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == k){
				ok = i+1;
			}
		}
		if(ok==-1) cout <<"NO"<<endl;
		else cout <<ok<<endl;
	}
}
