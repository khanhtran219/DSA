#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n,k,dem = 0;
		cin >>m>>n>>k;
		int a[m+5],b[n+5],c[1000001]={0};
		for(int i = 0 ; i < m; i++){
			cin >> a[i];
			c[a[i]]++;
		}for(int i = 0; i < n; i++){
			cin >> b[i];
			c[b[i]]++;
		}for(int i = 0; i <= 1000000; i++){
			dem += c[i];
			if(dem >= k){
				cout <<i<<endl;
				break;
			}
		}	
	}
	return 0;
}

