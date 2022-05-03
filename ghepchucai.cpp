#include <bits/stdc++.h>
using namespace std;
int n, b[15];
char a[15],c;
int kiemtra(){
	for(int i = 2; i < n; i++){
		if(a[i]=='A' && a[i-1] != 'E'&&a[i+1]!= 'E') return 0;
		if(a[i] == 'E' && a[i-1] != 'A' && a[i+1] != 'A') return 0;
	}
	return 1;
}
void in(){
	for(int i = 1; i <= n; i++) cout <<a[i];
	cout <<endl;
}
void quaylui(int i){
	char j;
	for(j = 'A'; j <= c; j++){
		if(b[j]==0){
			a[i] = j;
			b[j] = 1;
			if(i==n){
				if(kiemtra()) in();
			}else quaylui(i+1);
			b[j] = 0;
		}
	}
}
int main(){
	cin >> c;
	n = (int)c - 64;
	quaylui(1);
}
