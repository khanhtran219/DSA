#include <bits/stdc++.h>
using namespace std;
long long luyThua(long long a,long long b){
	if(b==0) return 1;
	long long tmp = luyThua(a,b/2);
	if(b%2==0) return tmp*tmp;
	return a*tmp*tmp;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		long long k;
		cin >>n>>k;
		int a = 50;
		while(a--){
			if(k%luyThua(2,a)==0){
				cout <<a+1<<endl;
				break;
			}
		}
	}
}
