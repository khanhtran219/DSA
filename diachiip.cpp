#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	scanf("\n");
	while (t--)
	{
		string s;
		cin >> s;
		int res=0,ok=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9')res=res*10+(s[i]-48);
            else if(s[i]=='.'){
                if(res>255){
                    ok=1;
                    break;
                }
                res=0;
                count++;
            }
            else {
                ok=1;
                break;
            }
        }
        if(res>255)ok=1;
        if(ok==0&&count==3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
