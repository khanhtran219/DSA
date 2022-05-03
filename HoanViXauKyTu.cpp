#include<bits/stdc++.h>
using namespace std;
string s;
int ok,n,c[100];
void sinh(){
	int i = n-2;
	while(c[s[i]] > c[s[i+1]]){
		i--;
		if(i == -1){
			ok = 0; return;
		}
	}
	int j = n-1;
	while(c[s[i]] > c[s[j]]) j--;
	swap(s[i],s[j]);
	int l = i+1, r = n-1;
	while(l < r){
		swap(s[l],s[r]);
		l++; r--;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		getline(cin >> ws,s);
		n = s.length();
		int k = 1;
		for(int i = 0; i <n; i++){
			c[s[i]] = k++;
		}
		ok = 1;
		while(ok){
			cout << s<<" ";
			sinh();
		}
		cout <<endl;
	}
	return 0;
}

