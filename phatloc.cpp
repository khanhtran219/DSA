#include <bits/stdc++.h>
using namespace std;
int n,ok,a[100];
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
	else{
		a[i] = 8;
	}
}
bool check(){
	if(a[1]==6 || a[n] == 8) return false;
	for(int i = 1; i < n; i++){
		if(a[i] == 8 && a[i+1] == 8) return false;
	}
	for(int i = 1; i < n-3; i++){
		if(a[i] == 6 && a[i+1] == 6 &&a[i+2] == 6 &&a[i+3]==6) return false;
	}
	return true;
}
void in(){
	for(int i = 1; i <= n; i++) cout<<a[i];
	cout <<endl;
}
int main(){
	cin >> n;
	ktao();
	while(ok){
		if(check()) in();
		sinh();
	}
}
