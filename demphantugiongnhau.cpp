#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[105][105],C[100005]={0};
		cin >> n;
		for(int i = 0; i < n; i++){
			int B[100005] = {0};
			for(int j = 0; j < n; j++){
				cin >> A[i][j];
				if(B[A[i][j]] == 0 ){
					C[A[i][j]]++;
					B[A[i][j]] = 1;
				}
			}
		}
		int dem = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(C[A[i][j]] == n){
					C[A[i][j]] = 0;
					dem++;
				}
			}
		}
		cout << dem<<endl;
	}
	return 0;
}

