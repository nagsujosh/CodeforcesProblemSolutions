#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;

        if(a[a.size() - 1] == 'S' && b[b.size() - 1] == 'S'){
            if(a.size() > b.size()){
                cout << "<" << endl;
            }
            else if(a.size() < b.size()){
                cout << ">" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
        else if(a[a.size() - 1] == 'L' && b[b.size() - 1] == 'L'){
            if(a.size() > b.size()){
                cout << ">" << endl;
            }
            else if(a.size() < b.size()){
                cout << "<" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
        else if(a[a.size() - 1] == 'S' || b[b.size() - 1] == 'S'){
            if(a[a.size() - 1] == 'S'){
                cout << "<" << endl;
            }
            else{
                cout << ">" << endl;
            }
        }
        else if(a[a.size() - 1] == 'L' || b[b.size() - 1] == 'L'){
            if(a[a.size() - 1] == 'L'){
                cout << ">" << endl;
            }
            else{
                cout << "<" << endl;
            }
        }
        else{
            cout << "=" << endl;
        }
    }
}
