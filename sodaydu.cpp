#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		int kt = 1,a[100]={0};
		for(int i = 0; i < s.length(); i++){
			if(s[0] == '0'){
				cout <<"INVALID"<<endl;
				kt = 0;
				break;
			}
			if(s[i] < 48 || s[i] >= 58) {
				cout <<"INVALID"<<endl;
				kt = 0;
				break;
			}
			a[(int)s[i]]++;
		}
		if(kt){
			for(int i = 48; i < 58; i++ ){
				if(a[i] == 0){
					cout <<"NO"<<endl;
					kt = 0;
					break;
				}
			}
		}
		if(kt ) cout <<"YES"<<endl;
	}
	return 0;
}

