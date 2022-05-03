#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  string s;
  long long k,s1=0;
  cin>>s>>k;
  for(int i=0;i<s.length();i++){
    s1=s1*10+s[i]-48;
    if(s1>=k){
      s1=s1%k;
    }
  }
  cout<<s1<<endl;
  }
}

