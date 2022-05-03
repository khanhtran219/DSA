#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
 string MSV, HoTen, Lop;
 
 float Mon1, Mon2, Mon3;
};

void nhap(SinhVien &A){
 getline(cin >> ws, A.MSV);
 getline(cin >> ws, A.HoTen);
 getline(cin >> ws, A.Lop);
 
 cin >> A.Mon1 >> A.Mon2 >> A.Mon3;
}

bool cmp(SinhVien a, SinhVien b){
    return a.MSV < b.MSV;
}

void sap_xep(SinhVien ds[], int n){
 sort(ds, ds+n, cmp);
}

void in_ds(SinhVien ds[], int n){
 for (int i = 0; i < n; i++){
  cout << i+1 << " " << ds[i].MSV << " " << ds[i].HoTen << " ";
  cout << ds[i].Lop<< " " ;
  cout << fixed << setprecision(1) << ds[i].Mon1 << " " << ds[i].Mon2 << " " << ds[i].Mon3 << "\n";
 }
}



int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
     nhap(ds[i]);
 }
 sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
