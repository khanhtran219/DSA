#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   long long n,dem=3,dem2=0,dem3=0;
        cin >>n;
        long long  a[10000],mang[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mang[i]=1;
        }
      while(1){
      	dem3=0;
        for(int i=0;i<n;i++){
          if(mang[i]==a[i]) dem3++;
        }
        if(dem3==n) break;
        dem2=0;
        for(int i=0;i<n;i++){
          if(mang[i]*2<=a[i]) dem2++;
        }
        if(dem2==n){
          dem++;
          for(int i=0;i<n;i++)  mang[i]*=2;
        } else 
        {
          for(int i=0;i<n;i++){
            if(mang[i]<a[i]) {
              mang[i]++;
              dem++;
            }
          }
        }
      }
      cout<<dem<<endl;
    }
    return 0;
}
