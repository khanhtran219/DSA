#include <bits/stdc++.h>
using namespace std;
int n,k,ok,a[100],b[100];
void ktao(){
	ok = 1;
	for(int i = 1; i <= k; i++){
		b[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && b[i] == n-k+i) i--;
	if(i==0) ok = 0;
	else{
		b[i]++;
		for(int j = i+1; j <= k; j++){
			b[j] = b[j-1] + 1;
		}
	}
}
bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >>n>>k;
		for(int i = 1; i <= k; i++) cin >> a[i];
		ktao();
		int dem = 1;
		while(ok){
			if(check()){
				cout <<dem<<endl;
				break;
			}
			dem++;
			sinh();
		}
	}
}
