#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		getline (cin >> ws, s1);
		s2 = "084";
		int k = s1.find(s2);
		for(int i = 0; i < k; i++){
			cout << s1[i];
		}
		for(int i = k + 3; i < s1.length(); i++){
			cout << s1[i];
		}
		cout <<endl;
	}
	return 0;
}

