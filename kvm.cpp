#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv,ten,lop;
    float d1,d2,d3;
};
void nhap( SinhVien &a){
    getline(cin>>ws,a.msv);
    getline(cin>>ws,a.ten);
    getline(cin>>ws,a.lop);
    cin>>a.d1>>a.d2>>a.d3;
}
bool cmp(SinhVien a, SinhVien b){
    if(a.ten < b.ten) return true;
    return false;
}
void sap_xep( SinhVien ds[],int n){
   sort(ds,ds+n,cmp);
}
void in_ds( SinhVien ds[],int n){
    for(int i = 0; i < n; i++){
        cout <<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].d1<<" "<<fixed<<setprecision(1)<<ds[i].d2<<" "<<fixed<<setprecision(1)<<ds[i].d3<<endl;
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
