#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n],b[n],P1=0,P2=0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i = 0; i < n; i++){
			P1 += a[i]*b[n-i-1];
			P2 += a[n-i-1]*b[i];
		}
		cout <<min(P1,P2)<<endl;
	}
}
