#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >>a;
		long long n = a;
		long long dao = 0;
		while(n){
			dao = dao*10 + n %10;
			n /= 10;
		}
		if(dao == a) cout<<"YES"<<endl;
		else cout << "NO"<<endl;
	}
	return 0;
}

