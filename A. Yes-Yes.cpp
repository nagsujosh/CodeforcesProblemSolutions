#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == 'Y'){
            char ch[] = {'Y', 'e', 's'};
            int Ct = 0;
            for(int i = 0; i < s.size() ; i++){
                if(s[i] != ch[Ct]){cout << "NO" << endl;break;}
                else{
                    Ct++;
                    if(Ct == 3) {Ct = 0;}
                }
                if(i == s.size() - 1) cout << "YES" << endl;
            }
        }
        else if(s[0] == 'e'){
            char ch[] = {'e', 's', 'Y'};
            int Ct = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] != ch[Ct]){cout << "NO" << endl;break;}
                else{
                    Ct = Ct + 1;
                    if(Ct == 3) {Ct = 0;}
                }
                if(i == s.size() - 1) cout << "YES" << endl;
            }
        }
        else if(s[0] == 's'){
            char ch[] = {'s', 'Y', 'e'};
            int Ct = 0;
            for(int i = 0;i < s.size() ; i++){
                if(s[i] != ch[Ct]){cout << "NO" << endl; break;}
                else{
                    Ct++;
                    if(Ct == 3) {Ct = 0;}
                }
                if(i == s.size() - 1) cout << "YES" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}
