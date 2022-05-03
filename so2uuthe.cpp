#include <bits/stdc++.h>
using namespace std;
vector<string> p;
string a;
bool check(int n){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]=='2') dem++;
	}
	return dem > n/2;
}
void Try(int i,int n){
	for(char j = '0'; j <= '2'; j++){
		a[i] = j;
		if(i==n){
			if(check(n)){
				p.push_back(a);
			}
		}else Try(i+1,n);
	}
}
int main(){
	for(int i = 1; i <= 7; i++){
		Try(1,i);
	}
	int t; cin >> t;
	while(t--){
		int n; 
		cin >> n;
		for(int i = 0; i < n; i++){
			cout <<p[i]<<" ";
		}
	}
}
