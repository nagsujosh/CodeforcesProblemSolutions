#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int Ct = 0;
        int ha[10];
        int dis = 0;
        int maximum = 0;
        int n;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++){
            dis = 0;
            maximum = 0;
            for(int j = 0; j < 10; j++){
                ha[j] = 0;
            }
            for(int j = i; j <= i + 100 && j < n; j++){
                ha[s[j] - '0']++;
                if(ha[s[j] - '0'] == 1) dis++;
                maximum = max(maximum, ha[s[j] - '0']);
                if(maximum <= dis){
                    Ct++;
                }
            }
        }
        cout << Ct << endl;
    }
}

