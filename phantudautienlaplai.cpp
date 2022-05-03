#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, A[1000000],B[1000000]={0};
		cin >> n;
		int kt = 1, k ;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			B[A[i]]++;
			if(B[A[i]] == 2 && kt == 1){
				k = A[i];
				kt = 0;
			}
		}
		if(kt == 0) cout << k<<endl;
		else cout <<"-1"<<endl;
	}
	return 0;
}

