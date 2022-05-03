#include<iostream>
#include<string.h>
using namespace std;
struct NhanVien{
  string ten,gioitinh,ngaysinh,diachi,mathue,ngayky,manhanvien;
}a;
void nhap(struct NhanVien){
  a.manhanvien="00001";
  getline(cin,a.ten);
  getline(cin,a.gioitinh);
  getline(cin,a.ngaysinh);
  getline(cin,a.diachi);
  getline(cin,a.mathue);
  getline(cin,a.ngayky);
}
void in(struct NhanVien){
  cout<<a.manhanvien<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.mathue<<" "<<a.ngayky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
