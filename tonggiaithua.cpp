#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long k = 1, s=0;
	for(int i = 1; i <= n;i++){
		k*=i;
		s += k;
	}
	cout << s<<endl;
	return 0;
}

