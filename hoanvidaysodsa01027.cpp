#include <bits/stdc++.h>
using namespace std;
int n,b[100],a[100],ok;
void ktao(){
	ok = 1;
	for(int i = 1; i <= n; i++) a[i] = i;
}
void sinh(){
	int i = n- 1;
	while(i >= 1 && a[i] > a[i+1]) i--;
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	sort(b+1,b+n+1);
	ktao();
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << b[a[i]]<<" ";
		}
		cout <<endl;
		sinh();
	}
}
