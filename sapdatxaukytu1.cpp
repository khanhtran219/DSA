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
		int kt = 1;
		for(int i = 97; i <= 122; i++){
			if(a[i] >(s.length()+1)/2){
				cout <<"-1"<<endl;
				kt = 0;
				break;
			}
		}
		if(kt) cout <<"1"<<endl;
	}
	return 0;
}

