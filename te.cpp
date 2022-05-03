#include<bits/stdc++.h>
using namespace std;

void Prime()
{
    
}

int main()
{
	bool prime[1000000] = {true};
//    Prime();
    prime[0] = false;
    prime[1] = false;

    for (int i = 2 ; i < 1e5; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j < 1e5; j+=i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i < 1e5; i++)
    {
    	if(prime[i]) cout << i << " ";
	}
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool check = false;
        for (int i = 2; i <= n/2+1; i++)
        {
            if(prime[i] && prime[n-i])
            {
                cout << i << " " << n-i;
                check = true;
                break;
            }
        }
        if(!check) cout << -1;
        cout << endl;
    }
}
