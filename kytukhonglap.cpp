#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		int a[1000]={0};
		for(int i = 0; i < s.length(); i++){
			a[(int)s[i]]++;
		}
		for(int i = 0; i < s.length(); i++){
			if(a[(int)s[i]] == 1) cout <<s[i];
		}
		cout <<endl;
	}
	return 0;
}

