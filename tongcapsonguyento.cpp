#include<bits/stdc++.h>
using namespace std;
int ktra(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int kt = 0;
		for(int i = 2; i <= n/2; i++){
			if(ktra(i) && ktra(n-i)){
				cout<<i<<" "<<n-i<<endl;
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout <<"-1"<<endl;
	}
	return 0;
}

