#include<iostream>
#include<string.h>
using namespace std;
void xoa(char s[],int vitrixoa){
	for(int i=vitrixoa;i<strlen(s);i++){
			s[i]=s[i+1];
		}
}
void xoakt(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32 && s[i+1]==32){
			xoa(s,i);
			i--;
		}
	}
	if(s[0]==' ') xoa(s,0);
	int n=strlen(s);
  	if(n>0) s[n-1]='\0';
}
int main(){
	char s[100];
	fgets(s,99,stdin);
	xoakt(s);
	int dem=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+=32;
		}
	}
	if(s[0]!=32) {
		s[0]-=32;
		dem++;
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32 && s[i+1]!=32) {
			dem++;
			s[i+1]-=32;
		}
	}
	int k=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32) k++;
		if(k==dem-1){
			if(s[i]>='a' && s[i]<='z') s[i]-=32;
		}
	}
	int k1=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' ') k1++;
		if(k1==dem-1){
			cout<<", ";
			k1++;
			continue;
		}
		cout<<s[i];
	}
	return 0;
}

