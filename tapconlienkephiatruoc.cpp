#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[10000];
void sinh(){
	int i = k;
	while(i>= 1 && a[i] == a[i-1]+1) i--;
	if(i==0) ok=0;
	else{
		a[i]--;
		int b = n;
		for(int j = k; j > i; j-- ){
			a[j] = n--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 1;
		cin >>n>>k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
		}
		a[0] = 0;
		sinh();
		if(ok){
			for(int i = 1; i <= k; i++) cout <<a[i]<<" ";
		}else{
			for(int i = 1; i <= k; i++) cout <<n-k+i<<" ";
		}
		cout<<endl;
	}
	return 0;
}

