#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		long long s[100];
		s[1] = 1; s[2] = 1;
		for(int i = 3; i <= n; i++){
			s[i] = s[i-1] + s[i-2];
		}
		cout <<s[n]<<endl;
	}
	return 0;
}

