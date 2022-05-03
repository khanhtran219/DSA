#include<bits/stdc++.h>
using namespace std;
int ktra(int n){
	if(n == 1) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>m>>n;
		for(int i = m; i <= n; i++){
			if(ktra(i)) cout<<i<<" ";
		}
		cout <<endl;
	}
	return 0;
}

