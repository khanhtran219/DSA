#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[10000];
void sinh(){
	int i = k;
	while(i>=1 &&a[i] == n-k+i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= n; j++){
			a[j] = a[j-1]+1;
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
		sinh();
		if(ok){
			for(int i = 1; i <= k; i++) cout <<a[i]<<" ";
		}else{
			for(int i = 1; i <= k; i++) cout <<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}

