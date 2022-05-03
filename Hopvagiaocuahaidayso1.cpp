#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,a[200005],b[100005]={0};
		cin >> n >> m;
		for(int i = 0; i < n+m; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		
		for(int i = 0; i < 100005; i++){
			if(b[i] > 0) cout << i<<" ";
		}
		cout <<endl;
		for(int i = 0; i < 100005; i++){
			if(b[i] > 1) cout << i << " ";
		}
		cout <<endl;
	}
}
