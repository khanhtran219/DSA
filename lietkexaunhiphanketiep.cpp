#include<bits/stdc++.h>
using namespace std;
void ktao(int n,int a[]){
	for(int i = 1; i <= n; i++){
		a[i]= 0;
	}
}
void sinh(int a[],int n, int ok){
	int i = n;
	while( i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else a[i] = 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[100], ok = 1;
		cin >> n;
		ktao(n,a);
		while(ok){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout <<" ";
			sinh(a,n,ok);
		}
		cout << endl;
	}
	return 0;
}

