#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
		stringstream ss(s);
		string token,a[1000];
		int d = 0;
		while(ss >> token){
			a[d] = token;
			for(int i = 0; i < a[d].size(); i++){
				a[d][i] = tolower(a[d][i]);
			}
			d++;
		}
		int kt = 1;
		for(int i = 0; i < d; i++){
			if(kt){
				a[i][0] = toupper(a[i][0]);
			}
			cout <<a[i];
			char k = a[i][a[i].length()-1];
			if(k == '.' || k == '?' || k == '!' ){
				cout << endl;
				kt = 1;
			}else{
				cout <<" ";
				kt = 0;
			}
		}
	return 0;
}

