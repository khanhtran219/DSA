#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,a[100005],b[100]={0},c[100];
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			string s = to_string(a[i]);
			for(int j = 0; j < s.size(); j++){
				b[s[j]-48]++;
			}
		}
		for(int i = 0; i < 10; i++) c[i] = i;
		for(int i = 0; i < 9; i++){
			for(int j = i+1; j < 10; j++){
				if(b[i]&&b[j]){
					if(b[i] < b[j]){
						swap(b[i],b[j]);
						swap(c[i],c[j]);
					}if(b[i]==b[j] && c[i] > c[j]){
						swap(b[i],b[j]);
						swap(c[i],c[j]);
					} 
				}
			}
		}
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < b[i]; j++){
				cout<<c[i]<<" ";
			}
		}
		cout <<endl;
	}
}
