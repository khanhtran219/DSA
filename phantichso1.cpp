#include <bits/stdc++.h>
using namespace std;
int n,a[50];
void in(int m){
	cout <<"(";
	for(int i = 1; i < m; i++){
		cout <<a[i]<<" ";
	}
	cout <<a[m]<<") ";
}
void quaylui(int x,int i, int s){
	int j;
	for(j = x; j >= 1; j--){
		a[i]= j;
		if(s==j) in(i);
		else if(j < s){
			quaylui(j,i+1,s-j);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		quaylui(n,1,n);	
		cout <<endl;	
	}
}
