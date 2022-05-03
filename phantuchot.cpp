#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100000]={0},s1[100005]={0},s2[100005],minn=1e9,maxx=0,dem=0;
		cin >> n;
		for(int i = 1; i <= n; i++ ){
			cin >> a[i];
			if(maxx < a[i]){
				maxx = a[i];
			}
			s1[i] = maxx;
		}
		for(int i = n; i >= 1; i--){
			if(minn>a[i]){
				minn = a[i];
			}
			s2[i] = minn;
		}
		s2[n+1] = 1e9+1;
		for(int i = 1; i <= n; i++){
			if(s1[i-1]<=a[i] && a[i]<s2[i+1]) dem++;
		}
		cout <<dem<<endl;
	}
	return 0;
}

