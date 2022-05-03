#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k,i,j;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n];
		for(i = 0; i < n; i++) cin >> a[i];
		for(i = 0; i <= n - k; i++){
			int maxx = 0;
			for(j = i; j < i+k; j++){
				if(a[j] > maxx) maxx = a[j];
			}
			cout << maxx <<" ";
		}
		cout << endl;
	}
	return 0;
}

