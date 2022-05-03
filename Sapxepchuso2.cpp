#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,b[100]={0};
		cin >> n;
		string s[n];
		for(int i = 0; i < n; i++){
			cin >> s[i];
			for(int j = 0; j < s[i].length(); j++){
				b[(int)s[i][j] - 48] = 1;
			}
		}
		for(int i = 0; i <10; i++){
			if(b[i] == 1) cout<<i<<" ";
		}
		cout<<endl;
	}
}
