#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, A[1000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int ok = 1,k = 1;
	while(ok){
		cout <<"Buoc "<<k++<<": ";
		ok = 0;
		for(int i = 0; i < n-1; i++){
			if(A[i] > A[i+1]){
				swap(A[i],A[i+1]);
			}
		}
		for(int i = 0; i < n; i++){
			cout <<A[i]<<" ";
			if(i> 0 && A[i]<A[i-1]){
				ok = 1;
			}
		}
		cout<<endl;
	}
	return 0;
}

