#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >>n;
		long long s[1000];
		s[1] = 1; s[2] = 1;
		int i = 2, kt = 0;
		if(n == 1){
			cout <<"YES"<<endl;
			kt = 1;
		}
		
		while(s[i++] <= n){
			s[i] = s[i-1] + s[i-2];
			if(s[i] == n){
				cout <<"YES"<<endl;
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout <<"NO"<<endl;
	}
	return 0;
}

