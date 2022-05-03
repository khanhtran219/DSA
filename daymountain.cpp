#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5],L,R,kt=1;
		for(int i = 0; i < n; i++) cin >> a[i];
		cin >>L>>R;
		for(int i = L; i <= R-2; i++){
			if(a[i] <= a[i+1]){
				if(a[i+1] > a[i+2]){
					kt = 0;
					break;
				}
			}
		}
		if(kt) cout <<"No"<<endl;
		else cout <<"Yes"<<endl;
	}
	return 0;
}

