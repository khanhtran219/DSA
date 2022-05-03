#include<bits/stdc++.h>
using namespace std;
string c[100000];
int k;
int thuannghich(){
	for(int i = 0; i <k/2; i++){
		if(c[i] != c[k-1-i]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		k = 0;
		string s;
		getline(cin >> ws,s);
		for(int i = 0; i < s.length(); i++){
			s[i] = toupper(s[i]);
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 65 && s[i] <= 79){
				s[i] = (s[i]+1)/3 - 20;
			}if(s[i] > 79 && s[i] <= 83){
				s[i] = s[i]/4 -13;
			}if(s[i] > 83 && s[i]<= 86){
				s[i] = s[i]/3 -20;
			}else{
				s[i] = (s[i]+1)/4 -13;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] != s[i+1]) c[k++] = s[i];
		}
		if(thuannghich()) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}

