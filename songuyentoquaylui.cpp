#include <bits/stdc++.h>
using namespace std;
void sangNguyenTo(){
	bool check[205];
	for(int i = 2; i <= 200; i++){
		check[i] = true;
	}
	for(int i = 2; i <= 200; i++){
		if(check[i]==true){
			for(int j = 2*i; j <= 200; j += i){
				check[j] = false;
			}
		}
	}
	for(int i = 2; i <= 200; i++){
		if(check[i] == true){
			cout <<i<<" ";
//			nt[k++] = i;
		}
	}
}
//void Try(int i){
//	for(int j = i+1; j < k; j++){
//		
//	}
//}
int main(){
	sangNguyenTo();
	int t; cin >> t;
	while(t--){
//		int n,p,s;
//		cin >> n>>p>>s;
	
	}
}
