#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, A[100000],B[100000]={0},dem=0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			B[A[i]]++;
		}
		for(int i = 0; i < n; i++){
			if(B[A[i]] > 1){
				dem += B[A[i]];
				B[A[i]] = 0;
			}
		}
		cout <<dem<<endl;
	}
	return 0;
}

