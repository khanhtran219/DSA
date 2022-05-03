#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n;
  int mang1[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cin>>mang1[i][j];
  }
  cin>>m;
  int mang2[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++)
    cin>>mang2[i][j];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<mang1[i][j]*mang2[i%m][j%m]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

