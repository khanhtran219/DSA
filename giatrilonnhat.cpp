#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long s = 0;
	cin >> n;
	int a[n+5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > 0 ) s+= a[i];
	}
	cout <<2*s<<endl;
	return 0;
}

