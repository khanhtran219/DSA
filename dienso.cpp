#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, A[100000], min =1000,max = 0,B[10000]={0},dem = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			if(A[i] < min) min = A[i];
			if(A[i]>max) max = A[i];
			B[A[i]]++;
		}
		for(int i = min; i < max; i++){
			if(B[i] == 0) dem++;
		}
		cout <<dem<<endl;
	}
	return 0;
}

