#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int f[n],s[n];
		for(int i = 0; i < n; i++) cin >> s[i];
		for(int i = 0; i < n; i++) cin >> f[i];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if((f[i]>f[j]) || (f[i] == f[j] && s[i] > s[j])){
					swap(s[i],s[j]);
					swap(f[i],f[j]);
				}
			}
		}
		int i= 1,time = f[0], dem = 1;
		while(i < n){
			if(time <= s[i]){
				dem++;
				time = f[i];
			}
			i++;
		}
		cout <<dem<<endl;
	}
}

