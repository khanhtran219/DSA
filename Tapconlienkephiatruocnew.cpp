#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
void sinh(){
	int i = k;
	while(i >= 1 && a[i] - 1 == a[i-1]){
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]--;
	}
	
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n>>k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
		}
		a[0] = 0;
		ok = 1;
		sinh();
		if(ok){
			for(int i = 1; i <= k; i++) cout << a[i]<<" ";
		}else{
			for(int i = n-k+1; i <= n; i++) cout <<i<<" ";
		}
		cout <<endl;
	}
}
