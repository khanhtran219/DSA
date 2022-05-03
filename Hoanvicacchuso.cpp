#include <bits/stdc++.h>
using namespace std;
int n,k;
void hieu(string a, string b){
	string c;
	int nho = 0;
	for(int i = k-1; i >= 0; i--){
		if(a[i] >= b[i]+nho){
			c[i] = (char)(a[i]-b[i]-nho+48);
			nho = 0;
		}else{
			c[i] = (char)(a[i]+10-b[i]-nho+48);
			nho = 1;
		}
	}
	cout << c<<endl;
}
int main(){
	cin >> n>>k;
	string s,s1,minn = "1000000000",maxx="0";
	for(int i = 1; i <= n; i++){
		cin>>s;
		sort(s);
		for(int j = 0; j < k; j++){
			s1[j] = s[k-j+1];
		}
		if(s < minn) minn = s;
		if(s1 > maxx) maxx = s1;
		hieu(maxx,minn);
	}
}
