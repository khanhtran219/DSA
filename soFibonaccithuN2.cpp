#include <bits/stdc++.h>
using namespace std;
int mod = 10e9+7;
int f[1000000005];
void Fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 10e9; i++){
		f[i] = f[i-1] + f[i-2];
	}
}
int main(){
	Fibo();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n]<<endl;
	}
}
