#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,A[100000];
		cin >> n>>m;
		for(int i = 0; i < n+m; i++){
			cin >>A[i];
		}
		for(int i = 0; i < n+m - 1; i++){
			for(int j = i+1; j < m+n; j++){
				if(A[i]>A[j]) swap(A[i],A[j]);
			}
		}
		for(int i = 0; i < n+m; i++){
			cout <<A[i]<<" ";
		}
		cout <<endl;
	}
	return 0;
}

