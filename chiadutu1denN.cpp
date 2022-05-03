#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n>> k;
		int S=0;
		for(int i = 1; i <= n; i++){
			S += i % k;
		}
		cout << S<<endl;
	}
	return 0;
}

