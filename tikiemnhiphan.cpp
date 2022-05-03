#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,A[1000000],kt = -1;
		cin >> n>>k;
		for(int i = 0 ; i < n; i++){
			cin >> A[i];
			if(A[i] == k) kt = i+1;
		}
		if(kt != -1 ) cout << "1"<<endl;
		else cout <<"-1"<<endl;
	}
	return 0;
}

