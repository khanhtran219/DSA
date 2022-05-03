#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	int k = s1.find(s2);
	for(int i = 0; i <k; i++) cout <<s1[i];
	for(int i = s2.length()+k+1; i <s1.length();i++) cout <<s1[i];
	return 0;
}

