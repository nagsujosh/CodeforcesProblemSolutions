#include<iostream>
using namespace std;

using ll = long long;

void solve()
{
    ll n, m, x;
    cin >> n >> m>> x;
    x -- ;
    ll col = x / n;
    ll row = x % n;
    cout << row * m + col + 1 << "\n";
}

int main()
{
    int n;
    cin >> n;

    while(n--){
        solve();
    }
}
