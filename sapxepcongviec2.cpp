#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int id,dl[n],pf[n],a[10005]={0},sum = 0,dem=0;
		for(int i = 0; i < n; i++){
			cin >> id>>dl[i]>>pf[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if((pf[i] < pf[j]) || (pf[i]==pf[j] && dl[i] < dl[j])){
					swap(dl[i],dl[j]);
					swap(pf[i],pf[j]);
				}
			}
		}
//		for(int i = 0; i < n; i++) cout <<pf[i]<<" ";
//		cout <<endl;
		for(int i = 0; i < n; i++){
			while(dl[i]){
				if(a[dl[i]] == 0){
					a[dl[i]] = 1;
					sum += pf[i];
					dem++;
					break;
				}
				dl[i]--;
			}
		}
		cout <<dem<<" "<<sum<<endl;
	}
}
