#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,B[10]={0},k;
		long long A[1000005];
		cin >>n;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			while(A[i]){
				k = A[i] % 10;
				B[k]++;
				A[i]/= 10;
			}
		}
		for(int i = 0; i < 10; i++){
			if(B[i] > 0) cout <<i<<" ";
		}
		cout <<endl;
	}
	return 0;
}

