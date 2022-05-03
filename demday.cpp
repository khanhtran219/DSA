#include<bits/stdc++.h>
using namespace std;
long long mod = 123456789;
long luyThua (long long a,long long b){
	if(b== 0) return 1;
	long long tmp = luyThua(a,b/2) % mod;
	if(b % 2 == 0) return (tmp*tmp) % mod;
	return a*(tmp*tmp%mod) % mod;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << luyThua(2,n-1)<<endl;
	}
	return 0;
}

