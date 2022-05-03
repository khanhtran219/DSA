#include <bits/stdc++.h>
using namespace std;
struct doanThang{
	int x1,x2;
};
bool cmp(doanThang a, doanThang b){
	return a.x2 < b.x2;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,dem = 0, x = 0;
		cin >> n;
		doanThang a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].x1 >> a[i].x2;
		}
		sort(a,a+n,cmp);
		for(int i = 0; i < n; i++){
			if(x <= a[i].x1){
				dem++;
				x = a[i].x2;
			}
		}
		cout <<dem<<endl;
	}
}
