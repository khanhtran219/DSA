#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int A[10000], n, L,R,Q;
		cin >>n>>Q;
		for(int i = 0; i <n; i++){
			cin >>A[i];
		}
		while(Q--){
			cin >>L>>R;
			int sum = 0;
			for(int i = L-1; i < R; i++){
				sum += A[i];
			}
			cout <<sum<<endl;
		}
	}
	return 0;
}

