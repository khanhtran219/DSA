#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,A[1000000],B[1000000]={0},s=0;
		cin >> n >> x;
		int kt = 0;
		for(int i= 0; i < n; i++){
			cin >>A[i];
			if(A[i] == x && kt == 0){
				s = i + 1;
				kt = 1;
			}
		}
		if( s != 0) cout << s<<endl;
		else cout <<"-1"<<endl;
	}
	return 0;
}

