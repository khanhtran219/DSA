#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int a[150]={0};
	for(int i = 0;i < s.length(); i++){
		int b = s[i];
		a[b]++;
		for(int i = 65; i < b; i++){
			a[i] = 0;
		}
	}
	for(int i = 122; i >=65;i--){
		for(int j = 0; j < a[i]; j++){
			cout <<(char)i;
		}
	}
	return 0;
}

