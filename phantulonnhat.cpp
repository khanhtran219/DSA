#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,A[100000];
		cin >>n;
		int max = 0;
		for(int i = 0; i <n; i++){
			cin >>A[i];
			if(A[i] > max) max = A[i];
		}
		cout<< max<<endl;
	}
	return 0;
}

