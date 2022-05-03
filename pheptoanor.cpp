#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100005]={0};
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			b[j][i] = a[j][i]|b[j][i-1];
			if(c[b[j][i]]==0){
				dem++;
				c[b[i][j]] = 1;
			}
		}
	}
	cout <<dem<<endl;
	return 0;
}

