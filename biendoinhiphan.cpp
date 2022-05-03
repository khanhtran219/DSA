#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, A[105][105],B[105][105]={0};
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> A[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(A[i][j] == 1){
					for(int i1 = 0; i1 < n; i1++){
						B[i1][j] = 1;
					}
					for(int j1 = 0; j1 < m; j1++){
						B[i][j1] = 1;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << B[i][j]<<" ";
			}
			cout << endl;
		}
	}
	return 0;
}

