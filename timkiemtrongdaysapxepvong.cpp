#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>  t;
	while(t--){
		int n, x,A[1000000],s;
		cin >>n >> x;
		for(int i = 0; i < n; i++){
			cin >>A[i];
			if(A[i] == x) s = i+1;
		}
		cout << s<<endl;
	}
	return 0;
}

