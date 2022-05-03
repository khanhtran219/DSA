#include <bits/stdc++.h>
using namespace std;
string s[100];
int a[100];
set<string> t;
int n,k,sz;
void inKq(){
	for(int i = 1; i <= k; i++){
		cout << s[a[i]]<<" ";
	}
	cout <<endl;
}
void Try(int i){
	for(int j = a[i-1]+1; j <= sz; j++){
		a[i] = j;
		if(i==k){
			inKq();
		}else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	string tmp;
	for(int i = 1; i <= n; i++){
		cin >> tmp;
		t.insert(tmp);
	}
	sz = 0;
	for(string x : t){
		s[++sz] = x;
	}
	Try(1);
}
