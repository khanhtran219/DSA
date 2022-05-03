#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		int dem = 0;
		for(int i = 0; i < s.length() - 1; i++){
			for(int j = i+1; j< s.length();j++){
				if(s[i] == s[j]) dem++;
			}
		}
		cout <<s.length() + dem <<endl;
	}
	return 0;
}

