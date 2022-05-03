#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,d,A[1000000];
		cin >>n>>d;
		for(int i = 0; i < n; i++){
			cin >>A[i];
		}
		int k = d % n;
		for(int i = k; i < n; i++){
			cout << A[i]<<" ";
		}
		for(int i = 0; i <k; i++){
			cout << A[i]<<" ";
		}
		cout <<endl;
	}
	return 0;
}

