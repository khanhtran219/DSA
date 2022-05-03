#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b == 0) return a;
	return gcd(b,a%b);
}
long long lcm(long long a, long long b){
	long long z = (long long)a*b;
	long long c = gcd(a,b);
	return z/c;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x,y,z,n;
		cin >>x>>y>>z>>n;
		long long a = lcm(x,y);
		long long b = lcm(a,z);
		long long c = pow(10,n-1)/b;
		long long d = (pow(10,n)-1)/b;
		if(c*b == pow(10,n-1)) c--;
		if(c*b == pow(10,n)-1) d++;
		if(d-c < 1) cout <<"-1"<<endl;
		else cout <<(++c)*b<<endl;
	}
	return 0;
}

