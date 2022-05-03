#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int kt = 1;
	while(cin >> s){
		for(int i = 0; i < s.length(); i++){
			s[i] = tolower(s[i]);
		}
		if(kt) s[0] = toupper(s[0]);
		if(s[s.size()-1] == '.' || s[s.size()-1] == '!' || s[s.size()-1] == '?'){
			s.erase(s.size()-1,1);
			cout <<s<<endl;
			kt = 1;
		}else{
			cout <<s<<" ";
			kt = 0;
		}
	}
	return 0;
}

