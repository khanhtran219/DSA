#include <bits/stdc++.h>
using namespace std;
int a[100005];
void hehe(){
	a[1] = 0;
	for(int i = 2; i <=100000; i++){
		int s1 = 9999999, s2 =9999999;
		if(i % 2 == 0) s1 =a[i/2]+ 1;
		if(i % 3 == 0) s2 = a[i/3] + 1;
		a[i] = min(min(s1,s2),a[i-1]+1);
	}
}
int main(){
	hehe();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n]<<endl;
	}
}
