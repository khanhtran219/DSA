#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,a[101]={0},b[101]={0};
	cin >> n >>s;
	if(s > n*9|| s == 0){
		cout << "-1 -1"<<endl;
		return 0;
	}
	for(int i = 1; i <= n; i++){
		if(s >= 9){
			a[i] = 9;
			b[i] = 9;
			s -= 9;
		} 
		else{
			a[i] = s;
			b[i] = s;
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
	cout <<" ";
	for(int i = 1; i <= n; i++) cout << b[i];
	return 0;
}

