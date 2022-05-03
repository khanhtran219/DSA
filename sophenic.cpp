#include<bits/stdc++.h>
using namespace std;
int ktra(int n){
	int dem2= 0;
	for(int i = 2; i <= sqrt(n); i++){
		int dem1 = 0;
		while(n % i == 0){
			dem1++;
			if(dem1 > 1) return 0;
			n /= i;
		}
		dem2++;
	}
	if(n != 1) dem2++;
	if(dem2 == 3) return 1;
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		cout << ktra(n)<<endl;
	}
	return 0;
}

