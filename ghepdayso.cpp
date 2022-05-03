#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,A[100000];
		cin >> k>> n;
		for(int i = 0; i < k*n; i++){
			cin >>A[i];
		}
		for(int i = 0; i < k*n - 1; i++){
			for(int j = i+1; j < k*n; j++){
				if(A[i]>A[j]) swap(A[i],A[j]);
			}
		}
		for(int i = 0; i < n*k;i++){
			cout <<A[i]<<" ";
		}
		cout <<endl;
	}
	return 0;
}

