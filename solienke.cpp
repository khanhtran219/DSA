#include<bits/stdc++.h>
using namespace std;
int ktra(long long n){
	int s = n % 10;
	n/=10;
	while(n){
		if(abs((n%10)-s) != 1) return 0;
		s = n%10;
		n /=10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >>n;
		if(ktra(n)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

