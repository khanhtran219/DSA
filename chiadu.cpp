#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int a,m;
		cin >> a >> m;
		int kt = 0;
		for(int i = 0; i < m; i++){
			if(a*i % m == 1){
				cout << i << endl;
				kt = 1; 
				break;
			}
		}
		if(kt == 0) cout << "-1"<<endl;
	}
	return 0;
}

