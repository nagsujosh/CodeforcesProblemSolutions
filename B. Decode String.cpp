#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--){
        int n;
        string t;
        cin >> n >> t;
        for(int i = 0; i < n;){
            if(i + 2 <= n && t[i + 2] - '0' == 0 && t[i + 3] - '0' != 0){
                cout << char('a' - 1 + 10 * ( t[i] - '0') + t[i + 1] - '0');
                i = i + 3;
            }
            else{
                cout << char('a' + t[i] - '0' - 1);
                i++;
            }
        }
        cout << endl;
    }
}
