#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool check[100]={false};
vector <vector<string> > res;
string s = "";
void Try2(int i){
	for(int j = 1; j <= n; j++){
		b[i] = j;
		if(i==n){
			string s2 = s;
			vector<string> res1;
			for(int k = 1; k <= n; k++){
				s2 += char(b[k] + '0');
			}
			res1.push_back(s2);
			res.push_back(res1);
		}else Try2(i+1);
	}
}
void Try1(int i){
	for(int j = 1; j <= n; j++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i==n){
				s.clear();
				for(int k = 1; k <= n; k++){
					s += char(a[k] + 'A'-1);
				}
				Try2(1);
			}else{
				Try1(i+1);
			}
			check[j] = false;
		}
	}
}
int main(){
	cin >> n;
	Try1(1);
	sort(res.begin(),res.end());
	for(int i = 0; i < res. size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout <<res[i][j];
		}
		cout <<endl;
	}
}
