#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[1000005],dem0=0,dem1=0,dem2=0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			if(A[i] == 0) dem0 ++;
			if(A[i] == 1) dem1++;
			if(A[i] == 2) dem2++;
		}
		for(int i = 0; i <dem0; i++){
			cout <<"0 ";
		}
		for(int i = 0; i <dem1; i++){
			cout <<"1 ";
		}
		for(int i = 0; i <dem2; i++){
			cout <<"2 ";
		}
		cout <<endl;
	}
	return 0;
}

