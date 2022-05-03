#include<bits/stdc++.h>
using namespace std;
int n, a[20],k,ok;
void sinh(){
	int i = n - 1;
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0){
		int k = n;
		while(a[i] > a[k]) k--;
		swap(a[i],a[k]);
		int r = i + 1, s= n;
		while(r <= s){
			swap(a[r],a[s]);
			r++; s--;
		}
	}else ok = 0;
}
int check(){
	for(int i = 1; i < k; i++){
		if(a[i] > a[i+1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1,a+n+1);
		ok = 1;
		while(ok){
			if(check()){
				for(int i = 1; i <= k; i++) cout<< a[i]<<" ";
				cout << endl;
			}
			sinh();
		}
	}
	return 0;
}

