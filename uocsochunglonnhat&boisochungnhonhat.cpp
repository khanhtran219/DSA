#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long z = gcd(a,b);
		cout << z <<" " << a*b/z<<endl;
	}
	return 0;
}

