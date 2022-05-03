#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
struct ThiSinh{
  string ten;
  string ngaysinh;
  float diem1,diem2,diem3;
  double tongdiem;
}A;
void nhap(struct ThiSinh){
  getline(cin,A.ten);
  getline(cin,A.ngaysinh);
  cin>>A.diem1>>A.diem2>>A.diem3;
  A.tongdiem=A.diem1+A.diem2+A.diem3;
}
void in(struct ThiSinh){
  cout<<A.ten<<" "<<A.ngaysinh<<" ";
  cout<<setprecision(1)<<fixed<<A.tongdiem;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
