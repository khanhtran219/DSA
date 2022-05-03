#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k,A[100000],B[100000]={0};
		cin >>n>>k;
		for(int i = 0; i <n; i++){
			cin >>A[i];
			B[A[i]]++;
		}
		int dem = 0;
		for(int i = 0; i < 100000; i++){
			if(B[i] > 0) dem += B[i];
			if(dem >= k){
				cout << i<<endl;
				break;
			}
		}
		
	}
	return 0;
}

