#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5][n+5];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n - i + 1; j++){
				for(int k = 1; k<= i; k+= pow(2,i)){
					a[j*k][i] = 0;
					a[j*k+1][i] = 1;
				}
			}
		}
		for(int i = 1; i <= pow(2,n); i++){
			for(int j = 1; j <= n; j++){
				cout << a[i][j];
			}
			cout <<endl;
		}
	}
}
