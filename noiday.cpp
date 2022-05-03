#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[1000005];
		cin >> n;
		long long s = 0;
		for(int i = 0; i < n; i++) cin >>a[i];
		sort(a,a+n);
		int k = 1;
		for(int i = n-1; i >= 0; i--){
			if(i==0) s += (k-1)*a[0];
			else s += (k++)*a[i];
		}
		cout <<s<<endl;
	}
	return 0;
}

