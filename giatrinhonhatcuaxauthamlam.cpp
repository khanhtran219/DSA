#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int k,a[100]={0};
		string s;
		cin >> k>>s;
		for(int i = 0; i < s.size(); i++){
			a[s[i]-65]++;
		}
		while(k--){
			int maxx = 0,x=0;
			for(int i = 0; i < 26; i++){
				if(a[i] > maxx){
					maxx= a[i];
					x = i;
				}
			}
			a[x]--;
		}
		long long sum =0;
		for(int i = 0; i < 26; i++){
			sum += a[i]*a[i];
		}
		cout <<sum<<endl;
	}
}
