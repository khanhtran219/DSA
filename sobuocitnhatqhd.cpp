#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,a[1005],res = 0, f[1005];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			f[i] = 1;
			for(int j = 0; j < i; j++){
				if(a[i] >= a[j]){
					f[i] = max(f[i],f[j]+1);
				}
			}
			res = max(res,f[i]);
		}
		cout << n-res<<endl;
	}
}
