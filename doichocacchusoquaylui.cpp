#include <bits/stdc++.h>
using namespace std;
int a[10],ok,n,k;
string s,s1;
bool cmp(char a, char b){
	return a > b;
}
void in(){
	int dem =0;
	if(ok==1) return;
	for(int i = 0; i < n; i++){
		if(s[i] != s1[a[i]-1]) dem++;
	}
	if(dem==k){
		ok = 1;
		for(int i = 1; i <= n;i++) cout << s1[a[i]-1];
		cout <<endl;
	}
}
void Try(int i){
	for(int j = a[i-1]; j <= n; j++){
		a[i] = j;
		if(i==n){
			in();
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		cin >> k;
		cin >> s;
		s1 = s;
		n = s.size();
		s1.sort();
		Try(1);
	}
}
