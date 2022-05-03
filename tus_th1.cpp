#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum = 0,A[1000005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		for(int j = 2; j <= sqrt(A[i]); j++){
			while(A[i] % j == 0){
				sum += j;
				A[i] /= j;
			}
		}
		if(A[i] != 1) sum += A[i];
	}
	cout <<sum<<endl;
	return 0;
}

