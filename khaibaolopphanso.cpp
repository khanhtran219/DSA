#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long GCD(long long a, long long b) {
	return a % b == 0 ? b : GCD(b, a % b);
}
class PhanSo {
private:
	long long tuso, mauso;
public:
	PhanSo(long long tuso, long long mauso) {
		this->tuso = tuso;
		this->mauso = mauso;
	}
  friend void operator>>(istream &,PhanSo &);
  friend void operator<<(ostream &,PhanSo &);
	void rutgon() {
		long long ucln = GCD(tuso, mauso);
		tuso /= ucln;
		mauso /= ucln;
	}
	// friend istream& operator>>(istream& in, PhanSo& phanso) {
	// 	in >> phanso.tuso >> phanso.mauso;
	// 	return in;
	// }
	// friend ostream& operator<<(ostream& xuat, PhanSo& phanso) {
	// 	xuat << phanso.tuso << "/" << phanso.mauso << endl;
	// 	return xuat;
	// }
};
void operator>>( istream &in, PhanSo &phanso)
{
  in >> phanso.tuso >> phanso.mauso;
//cin>>x.t>>x.m
}
void operator<<( ostream &xuat, PhanSo &phanso)
{
  	xuat << phanso.tuso << "/" << phanso.mauso << endl;
//cin>>x.t>>x.m
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
