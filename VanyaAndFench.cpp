#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,h;
    cin >> n >> h;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int num = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > h){
            num = num + 2;
        } else {
            num = num + 1;
        }
    }

    cout << num << endl;
    
    return 0;
}