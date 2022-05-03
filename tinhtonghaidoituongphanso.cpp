#include <bits/stdc++.h>
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
  // PhanSo();
  friend istream& operator>>(istream &,PhanSo &);
  friend ostream& operator<<(ostream &,PhanSo a);
  PhanSo operator + (PhanSo a);
	void rutgon() {
		long long ucln = GCD(tuso, mauso);
		tuso /= ucln;
		mauso /= ucln;
	}
};
istream& operator>>( istream &in, PhanSo &phanso)
{
  in >> phanso.tuso >> phanso.mauso;
  return in;
}
ostream& operator<<( ostream &out, PhanSo phanso)
{
  	out << phanso.tuso << "/" << phanso.mauso << endl;
    return out;
}
PhanSo PhanSo::operator +(PhanSo a){
  PhanSo tong(1,1);
  tong.tuso = this ->tuso * a.mauso +this->mauso *a.tuso;
  tong.mauso= this->mauso * a.mauso;
  tong.rutgon();
  return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

