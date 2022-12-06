#include<iostream>
using namespace std;

int main()
{
    long long int t,i;
    cin >> t;
    long long arr[t];
    for(i = 0; i < t ; i++){
        long long int p,a ,b ,c, x ,y ,z;
        cin >> p >> a >> b >> c;
        if(p % a == 0){
            x = 0;
        }
        else{
            x = a - p % a;
        }
        if(p % b == 0){
            y = 0;
        }
        else{
            y = b - p% b;
        }
        if(p % c == 0){
            z = 0;
        }
        else{
            z = c - p % c;
        }
        arr[i] = min(x, min(y, z));
    }
    for(i = 0; i < t; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
