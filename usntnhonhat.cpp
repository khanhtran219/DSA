#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout <<"1 ";
		for(int i = 2; i <= n; i++){
			for(int j = 2; j <= n; j++){
				if(i%j == 0){
					cout << j<<" ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

