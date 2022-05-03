#include<iostream>
using namespace std;
long long gcd(long long a, long long b){
	if(b== 0) return a;
	return gcd(b,a%b);
}
long long lcm(long long a, long long b){
	long long z = (long long)a*b;
	long long c = gcd(a,b);
	return z/c;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin>>n;
		long long s = 1;
		for(long long i = 2; i <= n; i++){
			s = lcm(s,i);
		}
		cout << s << endl;
	}
	return 0;
}

