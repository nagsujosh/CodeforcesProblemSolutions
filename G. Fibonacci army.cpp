#include<bits/stdc++.h>
using namespace std;
// Fibonacci Sequence: 1 1 2 3 5 8 13 ...
int main()
{
    int n;
    cin >> n;
    if(n == 0 || n == 1) cout << 1 << endl;
    else{
        int n1 = 1;
        int n2 = 1;
        int recent;
        for(int i = 0; i < n - 1; i++){
            recent = n1 + n2;
            n2 = n1;
            n1 = recent;
        }
        cout << recent << endl;

    }
}
