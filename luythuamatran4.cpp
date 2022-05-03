#include <bits/stdc++.h>
using namespace std;
long long n,k, mod = 1e9+7;
struct Matran{
	long long M[15][15];
};
Matran operator *(Matran A, Matran B){
	Matran C;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			C.M[i][j] = 0;
			for(int k = 1; k <= n; k++){
				C.M[i][j] = (C.M[i][j] + A.M[i][k] * B.M[k][j]%mod)%mod;		
			}
		}
	}
	return C;
}
Matran power(Matran A, long long k){
	if(k==1) return A;
	Matran temp = power(A,k/2);
	if(k%2==0) return temp*temp;
	return temp*temp*A;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n>>k;
		Matran A;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> A.M[i][j];
			}
		}
		Matran res;
		res = power(A,k);
		long long ans = 0;
		for(int i = 1; i <= n; i++){
			ans = (ans + res.M[1][i])%mod;
		}
		cout <<ans<<endl;
	}
}
