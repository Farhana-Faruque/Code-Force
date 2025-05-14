#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        int sum = 0;
        for(int j = 0; j < n; j++){
            if(j % 2 != 0){
                sum = sum - arr[j];
            } else {
                sum = sum + arr[j];
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}