#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,A[1005],B[1000000]={0};
		cin >> n >> x;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			B[A[i]]++;
		}
		if(B[x] == 0) cout <<"-1"<<endl;
		else cout <<B[x]<<endl;
	}
	return 0;
}

