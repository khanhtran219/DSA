#include<iostream>
using namespace std;
int ktra(int a){
	while(a){
		int n = a % 10;
		if(n != 0 && n != 6 && n != 8){
			return 0;
		}
		a /= 10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		if(ktra(a)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

