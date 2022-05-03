#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long mul(long long a, long long b){
	if( b == 0) return 0;
	long long tmp = mul(a,b/2);
	if(b&1) return (tmp*2+a)%mod;
	return tmp*2%mod;
}
long long pow(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n%mod;
	long long tmp = pow(n, k/2);
	long long a = mul(tmp,tmp);
	if(k&1) return a*n%mod;
	return a%mod;
}
int main(){
	while(1){
		long long n,k;
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		cout << pow(n,k)<<endl;
	}
	return 0;
}

