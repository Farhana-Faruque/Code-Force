#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int n;
        cin >> n;

        if(n%2 != 0){
            cout << "Kosuke" << endl;
        }
        else{
            cout << "Sakurako" << endl;
        }

    }
    
    return 0;
}