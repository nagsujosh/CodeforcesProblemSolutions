#include<iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;
    for(int i = 0; i < t ; i++){
        char str[60];
        cin >> str;

        for(int j = 0; str[j] != '\0';j++){
            if(j%2 == 0){
                if(str[j] == 'a'){
                    cout << "b";
                }
                else{
                    cout << "a";
                }

            }
            else{
                if(str[j] == 'z'){
                    cout << "y";
                }
                else{
                    cout << "z";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
