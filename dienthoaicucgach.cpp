#include<bits/stdc++.h>
using namespace std;
string c[100000];
int k;
int thuannghich(){
	for(int i = 0; i < k/2; i++){
		if(c[i] != c[k-1-i]) return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		k = 0;
		string s;
		getline(cin >> ws,s);
		for(int i = 0; i < s.length(); i++){
			s[i] = toupper(s[i]);
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] =='A' || s[i] == 'B' || s[i] == 'C'){
				s[i] = 2;
			}if(s[i] =='D' || s[i] == 'E' || s[i] == 'F'){
				s[i] = 3;
			}if(s[i] =='G' || s[i] == 'H' || s[i] == 'I'){
				s[i] = 4;
			}if(s[i] =='J' || s[i] == 'K' || s[i] == 'L'){
				s[i] = 5;
			}if(s[i] =='M' || s[i] == 'N' || s[i] == 'O'){
				s[i] = 6;
			}if(s[i] =='P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S'){
				s[i] = 7;
			}if(s[i] =='T' || s[i] == 'U' || s[i] == 'V'){
				s[i] = 8;
			}else{
				s[i] = 9;
			}
			for(int i = 0; i < s.length(); i++){
				if(s[i] != s[i+1]) c[k++] = s[i];
			}
		}
		if(thuannghich()) cout << "YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

