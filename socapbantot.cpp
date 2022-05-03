#include<bits/stdc++.h>
using namespace std;
long long C(int n, int k){
	long long c = 1;
	for(int i =n; i > n-k; i--){
		c*=i;
	}for(int i = 2; i <=k; i++){
		c/=i;
	}
	return c;
}
int main(){
	int n,k,a[300005],c[1000]={0},b[1000]={0};
	cin >> n>>k;
	string s;
	for(int i = 0; i < n; i++){
		getline(cin>>ws,s);
		a[i] = s.length();
	}
	for(int i = 0; i <= k; i++){
		c[a[i]]++;
		b[a[i]]++;
	}
	long long dem = 0;
	for(int i = 0; i <= k; i++){
		if(b[a[i]]>1){
			dem += C(b[a[i]],2);
			b[a[i]] = 0;
		}
	}
	for(int i = k+1; i < n; i++){
		c[a[i]]++;
		c[a[i-k-1]]--;
		dem += c[a[i]]-1;
	}
	cout <<dem<<endl;
	return 0;
}

