#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int tc;
        cin >> tc;
        int arr[tc];
        for(int j = 0; j < tc; j++){
            cin >> arr[j];
        }
        int count_num = 0;
        for(int j = 0; j < tc - 1; j++){
            int a = max(arr[j] , arr[j+1]);
            int b = min(arr[j], arr[j+1]);

            while(a > b * 2){
                b = b * 2;
                count_num ++;
            }
        }
        cout << count_num << endl;
    }
}
