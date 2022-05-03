#include <bits/stdc++.h>
using namespace std;

int XL (int a[], int n) {
    stack <int> p1;
    for (int i=0; i<n; i++) {
        if (p1.empty()or(a[i] + p1.top())%2)
            p1.push(a[i]);
        else p1.pop();
    }
    return p1.size();
}
main() {
    int n1; cin >> n1;
    int a1[n1+5];
    for (int i=0; i<n1; i++)
        cin >> a1[i];
    cout << XL(a1,n1);
}
