#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		getline(cin>>ws,s);
		int c[100]={0};
		for(int i = 0; i < s.length();i++){
			c[s[i]]++;
		}
		while(k){
			int max = 0, e = 0;
			for(int i = 65; i <= 90; i++){
				if(c[i] > max){
					max = c[i];
					e = i;
				}
			}
			c[e]--;
			k--;
		}
		long long sum = 0;
		for(int i = 65; i <=90; i++){
			sum += pow(c[i],2);
		}
		cout <<sum<<endl;
	}
	return 0;
}

