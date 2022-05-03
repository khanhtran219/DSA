#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a[100]={0},dem=0;
		for(int i = 0; i < s.size(); i++){
			a[(int)s[i]]++;
		}
		for(int i = 48; i <58; i++){
			dem+= (a[i]/2)*2;
		}
		cout <<++dem<<endl;
	}
}
