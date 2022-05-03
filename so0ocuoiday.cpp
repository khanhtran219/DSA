#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long A[1000005];
		int n,dem = 0;
		cin >>n;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			if(A[i]== 0) dem++;
		}
		for(int i = 0; i < n; i++){
			if(A[i] != 0) cout <<A[i]<<" ";
		}for(int i = 0; i < dem;i++){
			cout<<"0 ";
		}
		cout <<endl;
	}
	return 0;
}

