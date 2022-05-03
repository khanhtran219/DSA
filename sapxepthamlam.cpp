#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool check(){
	for(int i = 1; i <=n/2; i++){
		if((a[i]==b[i] && a[n-i+1]==b[n-i+1]) || (a[i]==b[n-i+1] && a[n-i+1]==b[i])){
			
		}
		else return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a+1,a+n+1);
		if(check()) cout <<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}
