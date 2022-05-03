#include<bits/stdc++.h>
using namespace std;
int n, k, ok,a[1000];
void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= n; j++){ // j = i + 1 = 4; j <= 5
			a[j] = a[j-1] + 1; // a[4] = a[3] +1 ; a[5] = a[4] + 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok = 1;
		ktao();
		while(ok){
			for(int i = 1; i <= k; i++){
				cout << a[i];
			}
			cout <<" ";
			sinh();
		}
		cout <<endl;
	}
	return 0;
}

