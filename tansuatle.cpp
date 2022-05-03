#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100000],b[1000000]={0};
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			if(b[a[i]] % 2 == 1){
				cout <<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}

