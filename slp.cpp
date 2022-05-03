#include <bits/stdc++.h>
using namespace std;
int n, A[100],ok;
int ktao(){
	ok = 1;
	for(int i = 1; i <= n; i++){
		A[i] = 6;
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && A[i] == 8){
		A[i] = 6;
		i--;
	}
	if(i==0) ok = 0;
	else A[i] = 8;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout <<pow(2,n)<<endl;
		ktao();
		while(ok){
			for(int i = 1; i <= n; i++) cout <<A[i];
			cout <<" ";
			sinh();
		}
		cout <<endl;
	}
}
