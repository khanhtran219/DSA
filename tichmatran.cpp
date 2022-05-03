#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,p,A[55][55],B[55][55],C[55][55]={0};
	cin >> n>>m>>p;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin >>B[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			for(int k = 0; k < m; k++){
				C[i][j] += A[i][k]*B[k][j];
			}
			cout <<C[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}

