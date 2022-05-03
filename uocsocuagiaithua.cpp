#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,p, k = 0,dem = 0;
		cin >>n>>p;
		while(pow(p,++k) <= n){
			for(int i = pow(p,k); i <= n; i += pow(p,k)){
				dem++;
			}
		}
		cout <<dem<<endl;
	}
	return 0;
}

