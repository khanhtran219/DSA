#include <bits/stdc++.h>
using namespace std;
int n,k,s,ok;
int a[25];
void ktao(){
	ok = 1;
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 0 && a[i] == n-k+i){
		i--;
	}if(i==0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1; j <=k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}
bool check(){
	int sum =0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
	}
	return sum == s;
}
int main(){
	while(1){
		cin >> n>>k>>s;
		if(n== 0 && k == 0 & s==0) break;
		if(n < k){
			cout <<"0"<<endl;
			continue;
		}
		memset(a,0,sizeof(a));
		ktao();
		int dem =0;
		while(ok){
			if(check()) dem++;
			sinh();
		}
		cout <<dem<<endl;
	}
}
