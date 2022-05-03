#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 0){
			cout <<"-1"<<endl;
			continue;
		}
		int ok = 0,k=0;
		while(n >= 7){
			if(n % 4 == 0 && n %7 != 0){
				ok = 1;
				break;
			}
			n-=7;
			k++;
		}
		if(ok){
			for(int i = 0; i < n/4; i++) cout <<"4";
			for(int i = 0; i < k; i++) cout <<"7";
		}else{
			if(n == 4 || n == 0){
				if(n==4){
					cout <<"4";
				}
				for(int i = 0; i < k; i++) cout <<"7";
			}else cout <<"-1";
		}
		cout <<endl;
	}
	return 0;
}

