#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],s[1000],kt,sum;
bool check(){
	for(int i = 1; i <= k; i++){
		if(s[i] != sum/k) return false;
	}
	return true;
}
void Try(int i){
	for(int j = 1; j <= k; j++){
		s[j] += a[i];
		if(i==n){
			if(check()) kt = 1;
		}else Try(i+1);
		s[j] -= a[i];
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n>>k;
		sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		kt = 0;
		if(sum % k){
			cout <<"0"<<endl;
			continue;
		}else{
			Try(1);
			cout<<kt<<endl;
		}	
	}
}
