#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,ten,lop,ngaysinh;
		double GPA;
		static int dem;
	public:
		SinhVien(){
			this->ma = this->ten = this->lop = this->ngaysinh = " ";
			this->GPA = 0;
		}
		friend istream& operator >> (istream &in, SinhVien& a);
		friend ostream& operator << (ostream &out, SinhVien a);
		void chuanhoangaysinh(){
			for(int i = 0; i < this->ngaysinh.length(); i++){
				if(this->ngaysinh[1] == '/') this->ngaysinh.insert(0,"0");
				if(this->ngaysinh[4] == '/') this->ngaysinh.insert(3,"0");
			}
		}
		int getDem(){
			return dem;
		}
		void chuanhoaten(){
			stringstream ss(this->ten);
			string token,a[100];
			int k = 0;
			while(ss>>token){
				string tmp = token;
				a[k][0] = toupper(tmp[0]);
				for(int i = 1; i < tmp.size(); i++){
					a[k][i] = tolower(tmp[i]);
				}
				k++;
			}
			for(int i = 0; i < k; i++){
				cout<<a[i]<<" ";
			}
		}
};
int SinhVien::dem=0;
istream& operator >> (istream &in, SinhVien& a){
	getline(cin >>ws,a.ten);
	getline(cin>>ws,a.lop);
	getline(cin>>ws,a.ngaysinh);
	cin >> a.GPA;
	return in;
}
ostream& operator << (ostream &out, SinhVien a){
	++a.dem;
	a.chuanhoangaysinh();
	a.ma = "B20DCCN" + string(3-to_string(a.dem).length(),'0') + to_string(a.dem);
	cout <<a.ma<<" ";
	a.chuanhoaten();
	cout <<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.GPA<<endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
