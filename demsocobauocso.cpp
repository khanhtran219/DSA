#include <bits/stdc++.h>
using namespace std;
int ktra(long long n){
	if(n < 2) return 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,dem=0;
		cin >> n;
		long long s = sqrt(n);
		for(int i = 2; i <= s; i++){
			if(ktra(i)) dem++;
		}
		cout <<dem<<endl;
	}
	return 0;
}

