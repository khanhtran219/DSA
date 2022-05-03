#include<iostream>
#include<string.h>
#include<math.h>
struct danhsach{
  char ten[1000];
};
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
	char s[1000];
  struct danhsach list[1000];
	fgets(s,999,stdin);
	int n=strlen(s);
	if(n>0) s[n-1]='\0';
  	int i=0;
  	char *p;
  	char *delim =" \t\n";
  	for(p=strtok(s,delim);p!=NULL;p=strtok(NULL,delim)){
  		strcpy(list[i].ten,p);
      i++;
	  }
	  for(int k=i-1;k>=0;k--){
      cout<<list[k].ten<<" ";
    }
    cout<<endl;
  }
}

