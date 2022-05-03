#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, minn = 1000000, maxx =0, dem =0,a[99999];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i = 0; i <n; i++){
			if(i > 0 ){
				dem += a[i] - a[i-1] - 1;
			}
		}
		cout <<dem<<endl;
	}
}
