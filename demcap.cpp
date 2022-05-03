#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, a[1000005],k,dem=0;
		cin >> n>>k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = i+1; j <= n; j++){
				if(abs(a[i]-a[j]) < k) dem++;
			}
		}
		cout <<dem<<endl;
	}
}
