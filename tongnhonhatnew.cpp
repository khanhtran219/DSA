#include <bits/stdc++.h>
using namespace std;
void tong(){
	
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[50];
		long long m= 0, k= 0;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1,a+n+1);
		for(int i = 1; i <= n; i++){
			if(i%2==0){
				m = m*10 + a[i];
			}else k = k*10+a[i];
		}
		cout <<m+k<<endl;
	}
}
