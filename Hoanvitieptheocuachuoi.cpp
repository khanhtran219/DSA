#include <bits/stdc++.h>
using namespace std;
int n,a[100000],ok;
void sinh(){
	int i = n-1;
	while(i >= 1 && a[i] >= a[i+1]){
		i--;
	}
	if(i==0) ok = 0;
	else {
		int j = n;
		while(a[i] >= a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		string s;
		cin >> s;
		n = s.size();
		for(int i = 1; i <= n; i++){
			a[i] = (int)(s[i-1]) - 48;
		}
		cout <<x <<" ";
		ok = 1;
		sinh();
		if(!ok) cout <<"BIGGEST"<<endl;
		else{
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout <<endl;
		}
	}
}
