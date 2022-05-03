#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100005],b[100005],c[100005],d[100005],dem=0;
		long long maxx = -10e9,minn = 10e9;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(a[i] > maxx){
				maxx = a[i];
			}
			c[i] = maxx;
		}
		for(int i = n; i > 0; i--){
			if(a[i] < minn){
				minn = a[i];
			}
			b[i] = minn;
		}
		for(int i = 1; i < n; i++ ){
			if(c[i]<=b[i+1]){
				d[dem++] = i;
			}
		}
		cout << dem<<endl;
		for(int i = 0; i < dem; i++) cout <<d[i]<<" ";
		cout <<endl;
	}
}
