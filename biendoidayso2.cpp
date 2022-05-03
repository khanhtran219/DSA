#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  long long mang[n+1],mang2[n+1];
  for(int i=0;i<n;i++) cin>>mang2[i];
  mang[0]=mang2[0]*mang2[1];
  for(int i=1;i<n-1;i++){
    mang[i]=mang2[i-1]*mang2[i+1];
  }
  mang[n-1]=mang2[n-1]*mang2[n-2];
  for(int i=0;i<n;i++) cout<<mang[i]<<" ";
  cout<<endl;
  }
}

