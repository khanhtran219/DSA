#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws, s);
		int s1 = 0, s2 = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] < 97 ){
				s1 = s1*10 + (int)s[i] - 48;
				if(s[i+1] >= 97 || s[i+1] == 0){
					s2 += s1;
					s1 = 0;
				}
			}
		}
		cout << s2<<endl;
	}
	return 0;
}

