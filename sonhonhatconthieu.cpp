#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[1000000],B[1000000]={0};
		cin >> n;
		for(int i = 1; i < n; i++){
			cin >> A[i];
			B[A[i]]++;
		}
		for(int i = 1; i <= n; i++){
			if(B[i] == 0){
				cout << i<<endl;
				break;
			}
		}
	}
	return 0;
}

