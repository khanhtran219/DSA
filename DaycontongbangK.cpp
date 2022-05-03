#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100];
vector<vector<int> > res;

bool kt(){
	int s = 0;
	for(int i = 1; i <= n; i++){
		s += b[i]* a[i];
	}
	return s == k;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			if(kt()){
				vector<int> s;
				for(int i = 1; i <= n; i++){
					if(b[i]) s.push_back(a[i]);
				}
				res.push_back(s);
			}
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		res.clear();
		cin>>n>>k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		Try(1);
		if(res.size()){
			sort(res.begin(),res.end());
			for(int i = 0; i < res.size(); i++){
				cout <<"[";
				for(int j = 0; j < res[i].size()-1; j++){
					cout << res[i][j] <<" ";
				}
				cout << res[i][res[i].size()-1] << "] ";
			}
		}else{
			cout <<"-1";
		}
		cout <<endl;
	}
}
