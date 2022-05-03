#include<bits/stdc++.h>
using namespace std;

int main(){
	int b[1000]={0},dem = 0;
	string s;
	getline(cin >> ws,s);
	for(int i = 0; i < s.length(); i++){
		b[s[i]]++;
	}
	for(int i = 0; i < s.length();i++){
		if(b[s[i]]>0){
			dem++;
			b[s[i]] = 0;
		}
	}
	cout <<dem;
	return 0;
}

