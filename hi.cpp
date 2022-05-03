#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000], b[1000]={0}, max = 0,kt=0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]]++;
		if(a[i] > max ) max = a[i];
	}
	for(int i = 1; i < max; i++){
		if(b[i] == 0){
			cout <<i<<endl;
			kt = 1;
		}
	}
	if(!kt) cout <<"Excellent!";
	return 0;
}

