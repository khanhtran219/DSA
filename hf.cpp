#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n],dem=0,Max=1,dem2=0,p,dem3=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]<0) dem++;
            else if(a[i]>0) dem2++;
            else dem3++;
            if(i==0) p=a[i];
            if(a[i]>p) p=a[i];
        }
        if(dem3==n) Max=0;
        else if(dem==n){
          sort(a,a+n);
          for(int i=0;i<n;i++) Max*=a[i];
          if(n%2==1) Max=Max/a[n-1];
        } 
        else if(dem2==n){
          for(int i=0;i<n;i++) Max*=a[i];
        }
        else {
          long long sum=1,mang[n],k=0;
            for (int i = 0; i < n; i++)
            {   
                if(a[i]==0){
                  sum=1;
                  continue;
                }
                sum *= a[i];
                mang[k++]=sum;
            }
        sort(mang,mang+k);
        Max=mang[k-1];
      }
      cout<<max(Max,p)<<endl;
    }
    return 0;
}
