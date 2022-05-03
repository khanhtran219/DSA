#include <bits/stdc++.h>
using namespace std;
int a[100],n,ok;
long long s;
void ktao(){
	ok = 1;
	for(int i = 1; i < 18; i++){
		a[i] = 0;
	}
	a[18] = 9;//000000000000000009
}
void sinh(){
	int i = 18;
	while(i >= 1 && a[i] == 9){
		a[i] = 0;
		i--;
	}
	if(i==0) ok = 0;
	else a[i] = 9;//0000000000000000090
}
void xuly(){
	s = 0;
	for(int i = 1; i <= 18; i++){
		s = s*10 + a[i];
	}
	if(s%n==0){
		ok = 0;
		cout <<s<<endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		while(ok){
			xuly();
			sinh();
		}
	}
}
