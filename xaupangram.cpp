#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k,a[1000]={0};
		getline(cin >>ws,s);
		cin >> k;
		if(s.length() < 26){
			cout <<"0"<<endl;
			break;
		}
		for(int i = 0; i < s.length(); i++){
			a[(int)s[i]]++;
		}
		int dem = 0;
		for(int i = 97; i <= 97 + 26; i++){
			if(a[i] > 0) dem++;
		}
		if(dem + k >= 26) cout <<"1"<<endl;
		else cout <<"0"<<endl;
	}
	return 0;
}

