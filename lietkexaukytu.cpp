#include <bits/stdc++.h>
using namespace std;
char c,a[100];
int k;
void in(){
	for(int i = 1; i <= k; i++){
		cout <<a[i];
	}
	cout <<endl;
}
void quaylui(int i){
	for(char j = a[i-1]; j <= c; j++){
		a[i] = j;
		if(i==k){
			in();
		}else quaylui(i+1);
	}
}
int main(){
	cin >> c>>k;
	int n = (int)c- 64;
	a[0] = 'A';
	quaylui(1);
}
