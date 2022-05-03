#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	string s1,s2,a1[1000],a2[1000];
	getline(cin >>ws,s1);
	for(int i = 0; i < s1.length(); i++) s1[i] = toupper(s1[i]);
	getline(cin>>ws,s2);
	for(int i = 0; i < s2.length(); i++) s2[i] = toupper(s2[i]);
	char *token;
	int m = 0,n=0;
	char *p = strtok(s1," ","\t");
	while(p!=NULL){
		a1[m++] = p;
		p=strtok(NULL," ");
	}
	p = strtok(s2," ");
	while(p!=NULL){
		a2[n++] = p;
		p=strtok(NULL," ");
	}
	for(int i = 0; i < m-1; i++){
		for(int j = 0; j < m; j++){
			if(a1[i] > a1[j]) swap(a1[i],a1[j]);
		}
	}
//	for(int i = 0; i < n-1; i++){
//		for(int j = 0; j < n; j++){
//			if(a2[i] > a2[j]) swap(a2[i],a2[j]);
//		}
//	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a1[i]==a2[j])	
		}
	}
	for(int i = 0; i )
	return 0;
}

