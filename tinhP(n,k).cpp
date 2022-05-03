#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
void P(int n,int k){
	long long s = 1;
	for(int i = n; i > n-k; i--){
		s = (s*i) % mod;
	}
	cout <<s<<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n>>k;
		if(k>n) cout <<"0"<<endl;
		else{
			P(n,k);	
		}
	}
	return 0;
}

