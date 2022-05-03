#include <bits/stdc++.h>
using namespace std;
void tach(string A[], string s, int &n){
	stringstream ss(s);
	string token;
	n = 0;
	while(ss >> token ){
		bool check = false;
		for(int i = 0; i < n; i++){
			if(A[i] == token){
				check = true;
				break;
			}
		}
		if(!check){
			A[n++] = token;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		getline(cin >> ws, s1);
		getline(cin >> ws, s2);
		string A[100], B[100];
		int h,k;
		tach(A,s1,h);
		tach(B,s2,k);
		for(int i = 0; i < h; i++){
			for(int j = 0; j < k; j++){
				if(A[i] == B[j]){
					A[i].clear();
					break;
				}
			}
		}
		sort(A,A+h);
		for(int i = 0; i < h; i++){
			if(!A[i].empty()) cout << A[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}

