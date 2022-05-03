#include <bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void ktao(){
	ok = 1;
	for(int i = 1; i <= n; i++){
		a[i] = 6;
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 8){
		a[i] = 6;
		i--;
	}
	if(i==0) ok = 0;
	else a[i] = 8;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cout <<pow(2,n)<<endl;
		ktao();
		while(ok){
			for(int i = 1; i <= n; i++) cout <<a[i];
			cout <<" ";
			sinh();
		}
		cout <<endl;
	}
}
