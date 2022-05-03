#include<bits/stdc++.h>
using namespace std;
class SinhVien{
  private:
    string masv,ngaysinh,ten,lop;
    float gpa;
  public:
    friend void nhapThongTinSV(SinhVien &);
    friend void inThongTinSV(SinhVien &);
};
void nhapThongTinSV(SinhVien &a){
  getline(cin,a.ten);
  cin>>a.lop>>a.ngaysinh>>a.gpa;
  a.masv="N20DCCN001";
  if(a.ngaysinh[2]!='/') a.ngaysinh="0"+a.ngaysinh;
  if(a.ngaysinh[5]!='/') a.ngaysinh=a.ngaysinh.insert(3,"0");
}
void inThongTinSV(SinhVien &a){
  cout<<a.masv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

