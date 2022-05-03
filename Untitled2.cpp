#include <bits/stdc++.h>
using namespace std;
int h = 0, k = 0;

void splitsOfString(string A[], string str, int n)
{
    stringstream ss(str);
    string token;
    n = 0;

    while(ss >> token)
    {
        A[n++] = token;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str1, str2;
        getline(cin >> ws, str1);
        getline(cin >> ws, str2);
        string A[100], B[100];
        splitsOfString(A, str1, h);
        splitsOfString(B, str2, k);

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if(A[i] == B[j]) A[i].clear();
            }
        }

        sort(A, A+h);
        for (int i = 0; i < h; i++)
        {
            if(!A[i].empty()) cout << A[i] << " ";
        }
    }
}
