#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1],min1 = 1e7, min2 = 1e7,s;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(min1 > a[i]){
				min1 = a[i];
				s = i;
			}
		}
		a[s] = 1e7;
		for(int i = 0; i < n; i++){
			if(min2 > a[i]){
				min2 = a[i];
			}
		}
		if(min2 != min1){
			cout << min1 << " "<<min2<<endl;
		} else cout <<"-1"<<endl;
	}
	return 0;
}

