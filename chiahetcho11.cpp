#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a =0;
		for(int i = 0; i < s.length(); i++){
			if(i % 2==0) a+= s[i] - 48;
			else a -= s[i] - 48;
		}
		if(a % 11 ==0) cout <<"1"<<endl;
		else cout <<"0"<<endl;
	}
	return 0;
}

