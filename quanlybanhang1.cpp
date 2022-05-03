#include <bits/stdc++.h>
using namespace std;
map<string,string> khachhang;
map<string,string> mathang;
map<string,long long> giaban;
int mhd=0,mkh=0,mmh=0;
class HoaDon{
	private:
		string mahoadon,makhachhang,mamathang;
		int sl;
	public:
		friend istream& operator << (istream &in, HoaDon& a);
		friend ostream& operator >> (ostream &out, HoaDon a);
};
istream& operator << (istream &in, HoaDon& a){
	++mhd;
	a.mahoadon = "HD" + string(3-to_string(mhd).size(),'0') + to_string(mhd);
	getline(cin>>ws,a.makhachhang);
	getline(cin>>ws,a.mamathang);
	cin >>a.sl;
	return in;
}
ostream& operator >> (ostream &out, HoaDon a){
	cout<<a.mahoadon<<" "<<khachhang[a.makhachhang]<<mathang[a.mamathang]<<a.sl<<" "<<a.sl*giaban[a.mamathang]<<endl;
	return out;
}
class KhachHang{
	private:
		string makhachhang, tenkhachhang,gioitinh,ngaysinh,diachi;
	public:
		friend istream& operator << (istream &in, KhachHang& a);
		
};
istream& operator << (istream &in, KhachHang& a){
	++mkh;
	a.makhachhang = "KH" +  string(3-to_string(mkh).size(),'0') + to_string(mkh);
	getline(cin >>ws,a.tenkhachhang);
	getline(cin >>ws,a.gioitinh);
	getline(cin>>ws,a.ngaysinh);
	getline(cin>>ws,a.diachi);
	khachhang[a.makhachhang] = a.tenkhachhang + " " + a.diachi +" ";
	return in;
}
class MatHang{
	private:
		string mamathang, tenmathang,dv;
		long long mua,ban;
	public:
		friend istream& operator << (istream &in, MatHang& a);
};
istream& operator << (istream &in, MatHang& a){
	++mmh;
	a.mamathang = "MH" + string(3-to_string(mmh).size(),'0') + to_string(mmh);
	getline(cin>>ws,a.tenmathang);
	getline(cin>>ws,a.dv);
	cin >>a.mua>>a.ban;
	string s = a.dv +" "+ to_string(a.mua) + " " + to_string(a.ban)+" ";
	mathang[a.mamathang] = s;
	giaban[a.mamathang] = a.ban;
	return in;
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

