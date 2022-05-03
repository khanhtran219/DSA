#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int k,a[100]={0};
		string s;
		cin >> k;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			a[s[i]]++;
		}
		int t = 0;
		for(int i = 58; i >=48; i--){
			if(a[i] > 0){
				int j = s.size()-1;
				while(s[j] != i) j--;
				swap(s[t],s[j]);
				t++;
				if(t == k) break;
			}
		}
		cout << s<<endl;
	}
}
