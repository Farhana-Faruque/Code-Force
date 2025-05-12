#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int k;
        cin >> k;
        if(k % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}