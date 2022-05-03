#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int k = n % 10,a;
		while(n){
			a = n % 10;
			n/=10;
		}
		if(a == k) cout << "YES"<<endl;
		else cout << "NO"<<endl;
	}
	return 0;
}

