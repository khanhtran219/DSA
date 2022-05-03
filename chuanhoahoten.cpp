#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		string s;
		getline(cin>>ws,s);
		stringstream ss(s);
		string token,a[100];
		int k=0;
		while(ss>>token){
			string temp = token;
			a[k][0] = toupper(temp[0]);
			for(int i = 1; i < temp.size(); i++){
				a[k][i] = tolower(temp[i]);
			}
			k++;
		}
		if(x==1){
			cout << a[k-1]<<" ";
			for(int i = 0; i < k-1; i++) cout << a[i]<<" ";
			cout << endl;
		}else{
			for(int i = 1; i < k; i++) cout <<a[i]<<" ";
			cout <<a[0]<<endl;
		}
	}
	return 0;
}

