#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s,a[10001]={0};
		cin >>s>>n;
		if(n== 1&&s == 0){
			cout <<"0"<<endl;
			continue;
		}
		if(s > n*9|| s == 0){
			cout << "-1"<<endl;
			continue;
		}
		for(int i = 1; i <= n; i++){
			if(s >= 9){
				a[i] = 9;
				s -= 9;
			} 
			else{
				a[i] = s;
				break;
			}
		}
		if(a[n] == 0){
			a[n] = 1;
			for(int i = n -1; i >= 1; i--){
				if(a[i] > 0){
					a[i]--;
					break;
				}
			}
		}
		for(int i = n; i >= 1; i--) cout <<a[i];
		cout <<endl;
	}
	
	return 0;
}

