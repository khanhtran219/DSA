#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int dem = 0;
		int s[10000];
		for(int i = 2; i <= sqrt(n);i++){
			while(n % i == 0){
				s[dem++] = i;
				n /= i;
			}
		}
		if(n != 1) s[dem++] = n;
		if(k > dem) cout <<"-1"<<endl;
		else cout <<s[k-1]<<endl;
	}
	return 0;
}

