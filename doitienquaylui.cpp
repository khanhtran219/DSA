#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)?
	return b >= a;
int n,s,minn= 100,a[100],t[100];
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i==n){
			int dem = 0;
			long long k = 0;
			for(int i = 1; i <= n; i++){
				if(a[i]){
					dem++;
					k += t[i];
				}
			}
			if(k==s) minn = min(dem,minn);
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n>>s;
	for(int i = 1; i <= n; i++) cin >> t[i];
	sort(t+1,t+n+1,cmp);
	Try(1);
	if(minn == 100){
		cout <<"-1"<<endl;
	}else cout <<minn<<endl;
}
