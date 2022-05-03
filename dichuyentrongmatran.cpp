#include<bits/stdc++.h>
using namespace std;
int m,n,ok,a[10000],k;
void ktao(){
	for(int i = 1; i <= k; i++){
		a[i]=i;
	}
}
void sinh(){
	int i = k;
	while(i>=1 && a[i] == n*m-k+i) i--;
	if(i==0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1; j <=n*m; j++){
			a[j] = a[j-1]+1;
		}
	}
}
bool check(){
	if(a[1]!=1 || a[k]!=m*n) return false;
	for(int i = 1; i < k; i++){
		if(a[i+1] !=a[i]+1 && a[i+1]!=a[i]+n) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> m>>n;
		int b[100000];
		for(int i= 0; i < n*m; i++) cin >> b[i];
		ok = 1;
		k=n+m-1;
		ktao();
		int dem = 0;
		while(ok){
			if(check()) dem++;
			sinh();
		}
		cout <<dem<<endl;
	}
	return 0;
}

