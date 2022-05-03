#include<bits/stdc++.h>
using namespace std;
int ktra(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n);i++ ){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(ktra(n)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

