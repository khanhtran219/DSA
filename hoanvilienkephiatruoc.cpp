#include<bits/stdc++.h>
using namespace std;
int n,a[10000];
void sinh(){
	int i = n - 1;
	while( i >= 1 && a[i] < a[i+1]) i--;
	int j = n;
	while(a[i] < a[j]) j--;
	swap(a[i],a[j]);
	reverse(a+i+1,a+n+1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sinh();
		for(int i = 1; i <=  n; i++) cout << a[i]<<"  ";
		cout << endl;
	}
	return 0;
}

