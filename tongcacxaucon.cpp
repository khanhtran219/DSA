#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >>ws,s);
		long long sum=0;
		for(int i = 0; i < s.length(); i++){
			for(int j = 0; j <s.length()-i; j++){
				int a = s[i]-48;
				sum += (i+1)*a*pow(10,j);
			}
		}
		cout <<sum<<endl;
	}
	return 0;
}

