#include <bits/stdc++.h>
using namespace std;
int n,k,t[100],a[100],s,ok;
bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += t[a[i]];
	}
	return s == sum;
}
void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void Try(int i, int k){
	for(int j = a[i-1] + 1; j <= n; j++){
		if(ok){
			a[i] = j;
			if(i== k){
				if(check()){
					cout <<k<<endl;
					ok= 0;
				}
			}else Try(i+1, k);
		}else return;
	}
}
int main(){
	int t1; cin >> t1;
	while(t1--){
		cin >> n>>s;
		for(int i = 1; i <= n; i++){
			cin >> t[i];
		}
		k = 1;
		ok = 1;
		while(k<= n && ok == 1){
			ktao();
			Try(1,k);
			k++;
		}
		if(ok) cout <<"-1"<<endl;	
	}
}
