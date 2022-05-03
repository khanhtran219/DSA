#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s[n];
	int dem = 0;
	for(int i= 0; i < n; i++ ){
		getline(cin >> ws, s[i]);
		int kt = 1;
		for(int j = 0; j < i; j++){
			if(s[i] == s[j]){
				kt = 0;
				break;
			}
		}
		
		if(kt == 1) dem++;
	}
	cout << dem<<endl;
	return 0;
}

