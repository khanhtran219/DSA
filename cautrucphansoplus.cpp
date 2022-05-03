#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long tu,mau; 
}; 
void nhap(struct PhanSo &p){
	cin >> p.tu>>p.mau; 
} 
long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b); 
} 
void rutgon(struct PhanSo &p){
	long long a = gcd(p.tu,p.mau);
	p.tu = p.tu/a;
	p.mau = p.mau/a;
} 
void in(struct PhanSo &p){
	cout<<p.tu<<"/"<<p.mau<<endl;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p); 
	return 0;
}

