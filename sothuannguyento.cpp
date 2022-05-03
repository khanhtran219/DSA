#include<bits/stdc++.h>
using namespace std;
int nguyento(int n){
	if(n<=1) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int dk2(int n){
	int s=0;
	while(n){
		int a = n% 10;
		if(a!=2 && a!=3 &&a!=5 &&a!=7) return 0;
		s += a;
		n/=10;
	}
	if(nguyento(s)) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,dem=0;
		cin >>a>>b;
		if(a>b) swap(a,b);
		for(int i = a; i <=b;i++){
			if(dk2(i) && nguyento(i)) dem++;
		}
		cout<<dem<<endl;
		
	}
	return 0;
}
