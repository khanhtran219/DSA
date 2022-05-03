#include <bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000];
bool check(){
	int s = 0;
	for(int i = 1; i <= n; i++){
		if(b[i]) s+= a[i];
	}
	if(s<= 1) return false;
	for(int i = 2; i <= sqrt(s); i++){
		if(s%i==0) return false;
	}
	return true;
}
void in(){
	for(int i =1; i <= n; i++ ){
		if(b[i]) cout <<a[i]<<" ";
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
