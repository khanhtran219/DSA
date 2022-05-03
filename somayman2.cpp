
// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long k = 0;
        while (s.size() > 1){
            k = 0;
            for (int i = 0; i< s.size();i++)
            k+= (int)(s[i] - '0');

            s = to_string(k);
        }
        int temp = s[0] - '0';
        if (temp % 9 == 0 && temp != 0) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}


