#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			cin >> b[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(b[i] > b[j]){
					swap(a[i],a[j]);
					swap(b[i],b[j]);
				}if(b[i] == b[j] && a[i] < a[j]){
					swap(a[i],a[j]);
					swap(b[i],b[j]);
				}
			}
		}
		int dem = 1, max = b[0];
		for(int i = 1; i < n; i++){
			if(a[i] >=max){
				max = b[i];
				dem++;
			}
		}
		cout <<dem<<endl;
	}
	return 0;
}

