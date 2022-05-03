#include <bits/stdc++.h>
using namespace std;
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i = 2; i < 100; i++){
		f[i] = f[i-2] + f[i-1];
	}
}
int main(){
	fibo();
	int t; cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n>>k;
		while(n>=3){
			if(k <= f[n-2]){
				n -= 2;
			}else{
				k -= f[n-2];
				n--;
			}
		}
		if(n==1) cout <<"0"<<endl;
		else cout <<"1"<<endl;
	}
}
