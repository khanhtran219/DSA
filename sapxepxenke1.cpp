#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[1000];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >>A[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(A[i] >A[j]) swap(A[i],A[j]);
			}
		}
		int B[10005],k = 0, m = 1;
		for(int i = n-1; i >= n/2; i--){
			B[k] = A[i];
			k+= 2;
		}
		for(int i = 0; i <= n/ 2; i++){
			B[m] = A[i];
			m+= 2;
		}
		for(int i = 0; i < n; i++){
			cout <<B[i]<<" ";
		}
		cout <<endl;
	}
	return 0;
}

