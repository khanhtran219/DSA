#include<bits/stdc++.h>
using namespace std;
int tinh(int n, long long k){
	long long x = pow(2,n-1);
	if(k == n) return n;
}

int main(){
	int t, n; long long k;
	cin >> t;
	while(t--){
		cin >> n>>k;
		cout << tinh(n,k)<<endl;
	}
	return 0;
}

