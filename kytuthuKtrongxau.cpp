#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
			long long n,k;
			char x = 'A',s;
			cin >> n >> k;
			if(k % 2 == 1) cout <<"A"<<endl;
			else{
				for(long long i = n -1 ; i >= 1; i--){
					long long b = pow (2,i);
					if((k-1)% b == b -1){
						s = x+i;
						cout << s<<endl;
						break;
					}
				}
			}
	}
	return 0;
}

