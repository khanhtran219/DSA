#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, A[100000],B[100000]={0};
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			B[A[i]]++;
		}
		int kt = 0;
		for(int i = 0; i < n; i++){
			if(B[A[i]] > 1) {
				cout << A[i]<<endl;
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << "NO"<<endl;
	}
	return 0;
}

