#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin>>ws,s);
		int s1 = 0, s2 = 0, a[10000]={0};
		for(int i = 0; i < s.length(); i++){
			a[(int)s[i]]++;
			if(s[i] < 65){
				s1 += (int)s[i] - 48;
				if(s[i+1] >= 65 || s[i+1] == 0){
					s2 += s1;
					s1 = 0;
				}
			}
		}
		for(int i = 65; i <=90; i++){
			for(int j = 0; j < a[i]; j++) cout << (char)i;
		}
		cout << s2<<endl;
	}
	return 0;
}

