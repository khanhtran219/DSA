#include <bits/stdc++.h>
using namespace std;
char a[100];
int n,ok;
void ktao(){
	ok = 1;
	for(int i = 1; i <= n; i++){
		a[i] = 'A';
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 'B'){
		a[i] = 'A';
		i--;
	}
	if(i==0) ok = 0;
	else a[i] = 'B';
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		while(ok){
			for(int i = 1; i <= n; i++) cout << a[i];
			sinh();
			if(ok) cout <<",";
			else cout <<endl;
		}
	}
}
