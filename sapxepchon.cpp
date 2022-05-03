#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int test = 1; test < n; test++)
    {
        cout << "Buoc " << test << ": ";
        int min = test-1;
        for (int i = test; i < n; i++)
        {
            if (A[min] > A[i]) min = i;
        }
        if (min != test-1) swap(A[test-1], A[min]);
        for (int i = 0; i < n; i++) cout << A[i] << " ";
        cout << "\n";
    }

}

