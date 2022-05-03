#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k, count = 0,a[100]={0};
		cin >> k;
		for(int i = 0; i < s.size(); i++){
			for(int j = 1; j < s.size(); j++){
				a[s[j]]++;
				int dem =0;
				for(int p = 'a'; p <= 'z'; p++){
					if(a[p] > 0) dem++;
				}
				if(dem == k) count++;
				if(dem > k) break;
			}
		}
		cout << count<<endl;
	}
	return 0;
}

