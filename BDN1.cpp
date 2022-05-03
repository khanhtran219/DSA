#include <bits/stdc++.h>
using namespace std;
long long giatri(string s){
	long long  x= 0;
	for(int i = 0; i < s.length(); i++){
		x = x*10 + s[i] -'0';
	}
	return x;
}
void xuly(long long n){
	queue <string> Q; int dem = 0;
	Q.push("1"); long long x =0;
	while(!Q.empty()){
		string s = Q.front();
		x = giatri(s);  Q.pop();
		if(x%n==0){
			cout <<x<<endl;
			break;
		}
			Q.push(s+"0");
			Q.push(s + "1");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		xuly(n);	
	}
	return 0;
}

