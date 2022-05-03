#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >>t ;
	while(t--){
		priority_queue<int> pq;
		int n; cin >> n;
		string s; cin >> s;
		int a[100] = {0};
		for(int i = 0; i < s.size(); i++){
			a[s[i]-65]++;
		}
		for(int i = 0; i < 26; i++){
			if(a[i] > 0){
				pq.push(a[i]);
			}
		}
		while(n--){
			pq.push(pq.top()-1);
			pq.pop();
		}
		long long res = 0;
		while(!pq.empty()){
			res += pow(pq.top(),2);
			pq.pop();
		}
		cout <<res<<endl;
	}
}
