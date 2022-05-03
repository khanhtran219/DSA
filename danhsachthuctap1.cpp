#include <bits/stdc++.h>
using namespace std;
int k = 1;
struct SinhVien{
	int stt;
	string msv,ten,lop,email,dn;
};
void nhap(SinhVien &a){
	a.stt=k++;
	cin >> a.msv;
	getline(cin>>ws,a.ten);
	cin >>a.lop>>a.email>>a.dn;
}
bool cmp(SinhVien a,SinhVien b){
	if(a.ten < b.ten ) return true;
	return false;
}
void sap_xep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++){
		nhap(ds[i]);
	}
	sap_xep(ds,n);
	int Q;
	cin >> Q;
	string A[10];
	for(int i = 0; i < Q; i++){
		cin >> A[i];
	}
	for(int i = 0; i < Q; i++){
		for(int j = 0; j < n; j++){
			if(ds[j].dn==A[i]){
				cout <<ds[j].stt<<" "<<ds[j].msv<<" "<<ds[j].ten<<" "<<ds[j].lop<<" "<<ds[j].email<<" "<<ds[j].dn<<endl;
			}
		}
	}
	return 0;
}

