#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s[1005],f[1005];
		cin >> n;
		for(int i= 0; i < n; i++) cin >> s[i];
		for(int i = 0; i < n; i++) cin >> f[i];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j <n; j++){
				if(f[i] > f[i+1]){
					swap(s[i],s[i+1]);
					swap(f[i],f[i+1]);
				}
			}
		}
		int max = f[0],dem = 1;
		for(int i = 1; i < n; i++){
			if(s[i] >= max ){
				max = s[i];
				dem++;
			}
		}
		cout << dem<<endl;
	}
	return 0;
}

