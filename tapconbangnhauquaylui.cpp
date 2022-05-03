#include <bits/stdc++.h>
using namespace std;
int n,kt,a[105],b[105];
bool check(){
	int s1 = 0, s2 = 0;
	for(int i = 1; i <= n; i++){
		if(b[i]) s1 += a[i];
		else s2 += a[i];
	}
	return s1 == s2;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] =j;
		if(i == n){
			if(check()) kt = 1;
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int sum = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2){
			cout <<"NO"<<endl;
			continue;
		}
		kt = 0;
		Try(1);
		if(kt) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}
