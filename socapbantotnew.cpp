#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	string s;
	cin >> n>>k;
	int a[n+5],b[100000]={0},dem = 0;
	for(int i = 1; i <= n; i++){
		cin >> s;
		a[i] = s.size();
	}
	for(int i = 1; i <= n; i++){
		if(i > k+1){
			b[a[i-k-1]]--;
		}
		dem += b[a[i]];//1
		b[a[i]]++;//2
	}
	cout <<dem<<endl;
}
