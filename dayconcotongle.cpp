#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool check(){
	int s = 0;
	for(int i = 1; i <= n; i++){
		if(b[i]){
			s+= a[i];
		}
	}
	return s%2==1;
}
void in(){
	for(int i = 1; i <= n; i++){
		if(b[i]){
			cout << a[i]<<" ";
		}
	}
	cout <<endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i==n){
			if(check()) in();
		}else Try(i+1);
	}
}
bool cmp(int a,int b){
	return a > b;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1,a+n+1,cmp);
		Try(1);
	}
}
