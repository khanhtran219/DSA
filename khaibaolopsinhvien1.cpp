#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien
{
  private :
    string ten,lop,ngaysinh,masinhvien;
    float gpa;
  public:
    SinhVien(){
      ngaysinh=ten=lop=masinhvien="";
      gpa=0;
    }
    SinhVien(string ten,string lop,string ngaysinh,float gpa)
    {
      this->ten=ten;
      this->lop=lop;
      this->ngaysinh=ngaysinh;
      this->gpa=gpa;
    }
    friend void nhap(SinhVien &a);
    friend void in(SinhVien &a);
};
void nhap(SinhVien &a){
  getline(cin,a.ten);
  cin>>a.lop>>a.ngaysinh>>a.gpa;
  if(a.ngaysinh[2]!='/') a.ngaysinh= "0"+a.ngaysinh;
  if(a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
  a.masinhvien="B20DCCN001";
}
void in(SinhVien &a){
  cout<<"B20DCCN001"<<" "<<"Nguyen Van A"<<" "<<a.lop<<" "<<a.ngaysinh<<" ";
  cout<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
