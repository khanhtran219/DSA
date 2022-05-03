#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int A[n][m];
        for (int i = 0; i< n; i++){
            for (int j = 0; j< m; j++){
                cin >> A[i][j];
            }
        }
        int hang = 0, cot = 0;
        while(hang < n && cot < m){
            for (int i = cot; i< m ; i++){
                cout << A[hang][i] << " ";
            }
            hang++;
            for (int i = hang; i< n; i++){
                cout << A[i][m-1] << " ";
            }
            m--;
            if (hang < n){
                for (int i = m-1; i>= cot; i--){
                    cout << A[n-1][i] << " ";
                }
                n--;
            }
            if (cot < m){
                for (int i = n-1; i>= hang; i--){
                    cout << A[i][cot] << " ";
                }
            cot++;
            }
        }
        cout << endl;
    }
    
    return 0;
}

