#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int main[t];

    for(int i =0; i < t; i++){
        int x,y;
        cin >> x >> y;
        char str[100001];
        cin >> str;
        int r = 0,l = 0,d = 0,u = 0;
        for(int j =0; str[j] != '\0'; j++){
            if(str[j] == 'R')
                r++;
            else if(str[j] == 'L')
                l--;
            else if(str[j] == 'D')
                d--;
            else if(str[j] == 'U')
                u++;
        }
        int xr = r + l;
        int yu = u + d;
        if(xr == x && yu == y){
            main[i] = 1;
        }
        else if(x > 0 && y > 0){
            if(r >= x && u >= y)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x > 0 && y < 0){
            if(r >= x && d <= y)
                main[i] = 1;
            else
                main[i] = 0 ;
        }
        else if(x < 0 && y >0){
            if(l <= x && u >= y)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x < 0 && y < 0){
            if(l <= x && d <= y)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x > 0 && y == 0){
            if(r >=  x)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x < 0 && y ==0){
            if(l <= x)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x == 0&& y > 0){
            if(u >= y)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x == 0 && y < 0){
            if(d <= y)
                main[i] = 1;
            else
                main[i] = 0;
        }
        else if(x == 0 && y == 0)
            main[i] = 1;

        else{
            main[i] = 0;
        }
    }
    for(int i = 0; i < t; i++){
        if(main[i] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
