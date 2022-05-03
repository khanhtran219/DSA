#include <bits/stdc++.h>
using namespace std;
int n,ok;
char A[100],c;
void sinh(){
	int i = n;
	while( i >= 1 && A[i] == 'X'){
		A[i] = 'O';
		i--;
	}
	if(i==0) ok = 0;
	else A[i] = 'X';
}
bool check(){
	int cnt1 = 0,cnt2=0,max1 = 0,max2 = 0;
	for(int i = 1; i <= n; i++){
		if(A[i] == c){
			cnt1++;
			cnt2 = 0;
		}else{
			cnt1 = 0;
			cnt2++;
		}
		max1 = max(max1,cnt1);
		max2 = max(max2,cnt2);
	}
	return max1 >= 5 && max1 > max2;
}
void in(){
	for(int i = 1; i <= n; i++){
		cout <<A[i];
	}
	cout <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n>>c;
		ok = 1;
		for(int i = 1; i <= n; i++){
			A[i] = 'O';
		}
		while(ok){
			if(check()) in();
			sinh();
		}
	}
}
