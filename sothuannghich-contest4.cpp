#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		int a[100]={0};
		int dem = 0;
		for(int i = 0 ; i < s.length(); i++){
			a[s[i]]++;
		}
		for(int i = 0; i < s.length(); i++){
			if(a[s[i]] == 1){
				dem++;
				break;
			}else{
				dem += 2;
				a[s[i]] -= 2;
			}
		}
		cout << dem<<endl;
	}
	return 0;
}


