#include <bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	if(s.count(5)!=0) cout <<"Found"<<endl;
	else cout <<"No"<<endl;
	return 0;
}

