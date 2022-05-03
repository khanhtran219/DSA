#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}
void process(struct PhanSo &A, struct PhanSo &B){
	struct PhanSo C,D;
	C.tu = A.mau*B.tu + B.mau*A.tu;
	C.mau = A.mau*B.mau;
	long long a = gcd(C.tu,C.mau);
	C.tu = pow(C.tu/a,2);
	C.mau = pow(C.mau/a,2);
	D.tu = A.tu*B.tu*C.tu;
	D.mau = A.mau*B.mau*C.mau;
	long long b = gcd(D.tu,D.mau);
	D.tu = D.tu/b;
	D.mau = D.mau/b;
	cout <<C.tu<<"/"<<C.mau<<" "<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
