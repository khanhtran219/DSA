#include<iostream>
#include<math.h>
using namespace std;
long long kiemtra(long long n){
  if(n==0||n==1) return 1;
  long long f1=0,f2=1,f3=1;
  while(f3<n){
    f3=f1+f2;
    f1=f2;
    f2=f3;
    if(f3==n) return 1;
  }
  return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,mang[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>mang[i];
    if(kiemtra(mang[i])==1) cout<<mang[i]<<" ";
  }
  cout<<endl;
  }
}


