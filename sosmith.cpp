#include <bits/stdc++.h>
using namespace std;
int ktra(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i ==0) return 0;
	}
	return 1;
}
int tach(int n){
	int a = 0,b=n;
	while(b){
		a= a + (b%10);
		b/=10;
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s=0;
		cin >> n;
		cout << tach(n)<<endl;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i==0){
				if(ktra(i)){
					s += tach(i);
				}
			}
		}
		if(s==tach(n)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

