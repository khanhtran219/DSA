#include <bits/stdc++.h>
using namespace std;
int k;
string A, B;
void tinh(string A, string B, int k){
	int nho = 0,a,b,C[100000];
	if(A.size()<B.size()){
		A = string(B.size()-A.size()+1,'0') + A;
		B = "0" + B;
	}else{
		B = string(A.size()-B.size()+1,'0') + B;
		A = "0" + A;
	}
	for(int i = A.size()-1; i >= 0; i--){
		a = (int)A[i]-48;
		b = (int)B[i]-48;
		if(a+b+nho >= k ){
			C[i] = a+b+nho-k;
			nho = 1;
		}else{
			C[i] = a+b+nho;
			nho = 0;
		}
	}
	if(C[0] == 0){
		for(int i = 1;  i < A.size(); i++) cout << C[i];
	}
	else for(int i = 0; i < A.size(); i++) cout <<C[i];
	cout <<endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >>k>>A>>B;
		tinh(A,B,k);
	}
}
