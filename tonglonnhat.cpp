#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,a[10000],b[10000];
		cin >> n>>m;
		for(int i = 1; i<=n; i++){
			cin>>a[i];
		}
		for(int i = 1; i <= m; i++){
			cin >> b[i];
		}
		int k = max(m,n),s=0;
		for(int i = 1; i <=k; i++){
			s+= max(a[i],b[i]);
		}
		cout <<s<<endl;
	}
	return 0;
}

