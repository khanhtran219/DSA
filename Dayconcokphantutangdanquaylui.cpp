#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100];
void in(){
	for(int i = 1; i <= k; i++){
		cout <<a[b[i]]<<" ";
	}
	cout <<endl;
}
void Try(int i){
	for(int j = b[i-1]+1; j <= n; j++){
		b[i] = j;
		if(i==k){
			in();
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n>>k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1,a+n+1);
		Try(1);
	}
}
