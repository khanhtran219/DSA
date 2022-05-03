#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int b,kt=0;
		for(int i = 0; i <= n/4; i++){
			int b = (n-4*i)/7;
			if(4*i+7*b==n){
				for(int j = 0; j < i; j++){
					cout<<"4";
				}for(int j = 0; j < b; j++){
					cout <<"7";
				}
				kt = 1;
				break;
			}
		}
		if(!kt) cout <<"-1";
		cout <<endl;
	}
	return 0;
}

