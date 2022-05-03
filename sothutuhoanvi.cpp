#include <bits/stdc++.h>
using namespace std;
int n,ok,a[100],b[100];
void ktao(){
	ok = 1;
	for(int i = 1; i <= n; i++){
		b[i] = i;
	}
}
void sinh(){
	int i = n - 1;
	while(i>= 0 && b[i] > b[i+1]) i--;
	if(i==0) ok = 0;
	else{
		int j = n;
		while(b[i]>b[j]) j--;
		swap(b[i],b[j]);
		reverse(b+i+1,b+n+1);
	}
}
bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		ktao();
		int dem = 1;
		while(ok){
			if(check()){
				cout<<dem<<endl;
				break;
			}
			sinh();
			dem++;
		}
	}
}
