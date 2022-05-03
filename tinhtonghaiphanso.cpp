#include <iostream>
using namespace std;
struct PhanSo{
  long long tu,mau;
}t;
void nhap(struct PhanSo &p){
  cin>>p.tu>>p.mau;
}
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void rutgon(struct PhanSo &p){
  long long a=gcd(p.tu,p.mau);
  p.tu=p.tu/a;
  p.mau=p.mau/a;
}
PhanSo tong(PhanSo &p,PhanSo &q ){
  t.tu=p.tu*q.mau+p.mau*q.tu;
  t.mau=p.mau*q.mau;
  return t;
}
void in(struct PhanSo &p){
  rutgon(p);
  cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

