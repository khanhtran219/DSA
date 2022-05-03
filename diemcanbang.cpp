#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],s =0,k =0,ok = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s += a[i];
		}
		for(int i = 0; i <n; i++){
			if(2*k==s-a[i]){
				cout<<i+1<<endl;
				ok = 1;
				break;
			}
			k+= a[i];
		}
		if(!ok) cout <<"-1"<<endl;
	}
}
