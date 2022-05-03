#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int a[n+5],s1 = 0,s2=0;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		if(k < n-k){
			for(int i = 0; i < k; i++){
				s1 += a[i];
			}
			for(int i = k; i < n; i++){
				s2 += a[i];
			}
		}else{
			for(int i = 0; i < n-k; i++){
				s1 += a[i];
			}
			for(int i = n-k; i < n; i++){
				s2 += a[i];
			}
		}
		cout <<s2-s1<<endl;
	}
}
