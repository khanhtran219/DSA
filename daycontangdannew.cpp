#include <bits/stdc++.h>
using namespace std;
vector<string> res;
int n,a[100],b[100];
bool check(){
	int s = -1,dem =0;
	for(int i = 1; i <= n; i++){
		if(b[i] == 1){
			if(a[i] < s) return false;
			s = a[i];
			dem++;
		}
	}
	if(dem <= 1) return false;
	return true;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			if(check()){
				string s1 = "";
				for(int l = 1; l <= n; l++){
					if(b[l]) s1 += to_string(a[l]) +" ";
				}
				res.push_back(s1);
			}
		}else Try(i+1);
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	Try(1);
	sort(res.begin(),res.end());
	for(int i = 0; i < res.size(); i++){
		cout << res[i]<<endl;
	}
}
