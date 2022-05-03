#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gioitinh,ngaysinh,diachi,mst,ngayki;
};
void nhap(struct NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.mst);
	getline(cin,a.ngayki);
}
void in(struct NhanVien &a){
	cout<<"00001 "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.mst<<" "<<a.ngayki;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
