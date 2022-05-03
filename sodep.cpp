#include<bits/stdc++.h>
using namespace std;
string s;
int tang(){
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] >= s[i+1]) return 0;
	}
	return 1;
}
int giam(){
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] <= s[i+1]) return 0;
	}
	return 1;
}
int chan(){
	for(int i = 0; i <s.length(); i++){
		if((int) s[i] % 2 == 1) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		getline(cin >> ws,s);
		if((tang() || giam) && chan()){
			cout <<"YES"<<endl;
		}else cout <<"NO"<<endl;
	}
	return 0;
}

