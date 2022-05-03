#include<iostream>
#include<string.h>
#include<math.h>
long long luythua(long long s1,long long a,long long b){
  if(a==0) return 1;
  if(a==1) return s1;
  if(a%2==0){
    long long s=luythua(s1,a/2,b);
    return s*s %b;
  } else{
    long long s=luythua(s1,a-1,b);
    return (s1*s)%b;
  } 
}
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  string s;
  long long a,b,s1=0,sum;
  cin>>s>>a>>b;
  for(int i=0;i<s.length();i++){
    s1=s1*10+s[i]-48;
    if(s1>=b){
      s1=s1%b;
    }
  }
  sum=luythua(s1,a,b);
  cout<<sum<<endl;
  }
  return 0;
}
