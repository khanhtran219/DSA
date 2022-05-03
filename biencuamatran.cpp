#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,A[105][105],B[105][105]={0};
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> A[i][j];
				if(i == 0 || i == n - 1) B[i][j] = 1;
				else if(j == 0 || j == n-1) B[i][j] = 1;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(B[i][j] == 0) cout <<"  ";
				else cout <<A[i][j]<<" ";
			}
			cout <<endl;
		}
	}
	return 0;
}

