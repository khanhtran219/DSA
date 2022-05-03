 #include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n],b[n/2],c[n/2],k1=0,k2=0;
	for(int i = 0; i < n; i++){
		cin >>a[i];
		if(a[i] % 2 == 0){
			b[k1++] = a[i];
		}else{
			c[k2++] = a[i];
		}
	}
	sort(b,b+k1);
	sort(c,c+k2);
	int m1 = 0, m2 = k2-1;
	for(int i = 0; i < n; i++){
		if(a[i]%2==0){
			cout << b[m1++]<<" ";
		}else{
			cout <<c[m2--]<<" ";
		}
	}
	cout <<endl;
}
