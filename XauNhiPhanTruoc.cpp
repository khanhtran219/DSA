#include<bits/stdc++.h>
using namespace std;
string s;
int ok;
void sinh(){
	int i = s.length()-1;
	while(s[i] == 48) {
		s[i] = 49;
		i--;
		if(i==-1){
			ok = 0;
			return;
		}
	}
	s[i] = 48;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		getline(cin>>ws,s);
		ok = 1;
		sinh();
		if(ok) cout <<s<<endl;
		else {
			for (int i = 0; i < s.length(); i++){
				cout <<"1";
			}
			cout <<endl;
		}
	}
	return 0;
}

