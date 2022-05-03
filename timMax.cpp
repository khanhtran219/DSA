#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		long long s = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			s = (s+(a[i]*i)%mod)%mod;
		}
		cout <<s<<endl;
	}
}
