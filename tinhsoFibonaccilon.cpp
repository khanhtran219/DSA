#include <bits/stdc++.h>
using namespace std;
long mod = 1e9 +7,a[100000];
void Fibo(){
	a[0] = 0; a[1] = 1;
	for(int i = 2; i <=1000; i++){
		a[i] = (a[i-1] + a[i-2]) % mod;
	}
}
int main(){
	Fibo();
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << a[n]<<endl;
	}
	return 0;
}

