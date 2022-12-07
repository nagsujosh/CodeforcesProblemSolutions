#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m; // n = number of rows, m = number of columns
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = 0;
            }
        }
        int Ct1 = 0;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m; j++){
                int Ct2 = 0;
                if(i - 1 >= 0 && j + 2 < m) Ct2++;
                if(i + 1 < n && j + 2 < m) Ct2++;
                if(i + 2 < n && j + 1 < m ) Ct2++;
                if(i + 2 < n && j - 1 >= 0) Ct2++;
                if(i - 2 >= 0 && j + 1 < m) Ct2++;
                if(i - 2 >= 0 && j - 1 >= 0) Ct2++;
                if(i - 1 >= 0 && j - 2 >= 0) Ct2++;
                if(i + 1 < n && j - 2 >= m) Ct2++;
                if(Ct2 == 0){
                    cout << i + 1 << " " << j + 1 << endl;
                    Ct1++;
                    break;
                }
            }
            if(Ct1 > 0) break;
        }
        if(Ct1 == 0) cout << 1 << " " << 1 << endl;
    }
}
