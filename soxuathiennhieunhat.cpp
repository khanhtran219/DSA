#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[100005]={0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		int minn = 1e6,ok = 0,s;
		for(int i = 0; i < n; i++){
			if(b[a[i]] > n/2 && b[a[i]] < minn){
				minn = b[a[i]];
				s = a[i];
				b[a[i]] = 0;
				ok = 1;
			}
		}
		if(ok) cout <<s<<endl;
		else cout <<"NO"<<endl;
	}
}
