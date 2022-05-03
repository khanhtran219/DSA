#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b== 0) return a;
	return gcd(b,a%b);
}
int lcm(int a, int b){
	int z = a*b;
	int c = gcd(a,b);
	return z/c;
}
int dem(int a,int b,int c){
	if(a % c != 0 && b % c != 0 ) return b /c- a/c;
	else return (b-a)/c+1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int m,n,a,b;
		cin >>m>>n>>a>>b;
		int c = lcm(a,b);
		cout << dem(m,n,a)+dem(m,n,b)-dem(m,n,c)<<endl;
	}
	return 0;
}

