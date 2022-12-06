#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr1[n][n];
        int arr2[n][n];
        int arr3[n][n];
        int arr4[n][n];
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < n; j++){
                arr1[i][j] = s[j] - '0';
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j  < n; j++){
                arr2[j][n - i - 1] = arr1[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j  < n; j++){
                arr3[j][n - i - 1] = arr2[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j  < n; j++){
                arr4[j][n - i - 1] = arr3[i][j];
            }
        }
        int c = 0;
        for(int i = 0; i < n / 2; i++){
            for(int j = i; j < n - i - 1; j++){
                int k = arr1[i][j] + arr2[i][j] + arr3[i][j] + arr4[i][j];
                if(k == 2){
                    c = c + 2;
                }
                else if(k == 1 || k == 3){
                    c = c + 1;
                }
            }
        }
        cout << c << endl;
    }
}
