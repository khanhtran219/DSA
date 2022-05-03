#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << max(max(max(a[0]*a[1],a[n-1]*a[n-2]),a[n-1]*a[n-2]*a[n-3]),a[0]*a[1]*a[n-1]);
}
