#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws, s);
		int dem = 0;
		for(int i = 0; i < s.length(); i++){
			dem++;
			if(s[i] != s[i+1]){
				cout <<s[i]<<dem;
				dem = 0;
			}
		}
		cout <<endl;
	}
	return 0;
}

