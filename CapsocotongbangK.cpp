#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n>> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int dem = 0;
		unordered_set <int> b;
		for(int i = 0; i < n; i++){
			dem += b.count(k-a[i]);
			b.insert(a[i]);
		}
		cout <<dem<<endl;
	}
}
