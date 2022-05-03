#include <bits/stdc++.h>
using namespace std;
long long luythua(long long x, long long y, long long p){
	if(y == 0) return 1;
	long long tmp = luythua(x,y/2,p);
	if(y %2==0) return (tmp*tmp)%p;
	return (x*(tmp*tmp%p))%p;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x,y,p;
		cin >> x>>y>>p;
		cout<<luythua(x,y,p)<<endl;
	}
	return 0;
}

