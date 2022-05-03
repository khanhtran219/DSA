#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,A[1000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(A[i] > A[j]) swap(A[i],A[j]);
		}
	}
	cout <<A[0]<<" ";
	for(int i = 1; i < n; i++){
		if(A[i] != A[i-1]) cout<< A[i]<< " "; 
	}
	cout <<endl;
	return 0;
}

