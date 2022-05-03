#include<iostream>
using namespace std;
long long tich(long long a,long long b,long long c){
  if(a==0||b==0) return 0;
  if(b==1) return a%c;
  if(a==1) return b%c;
  if(b%2==0){
    if(a%2==0){
      long long s=tich(a/2,b/2,c);
      return (4%c*s%c)%c;
    } else {
      long long s=tich(a-1,b/2,c);
      return (2%c*s%c+b%c)%c;
    }
  } else{
    if(a%2==0){
      long long s=tich(a/2,b,c);
      return (2%c*s%c)%c;
    } else{
      long long s=tich(a-1,b,c);
      return (s%c+b%c)%c;
    }
  } 
}
int main(){
  int t;
  cin>>t;
  while(t--){
  long long a,b,c;
  cin>>a>>b>>c;
  long long k=tich(a,b,c);
  cout<<k<<endl;
  }
}

