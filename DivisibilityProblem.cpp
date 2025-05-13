#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        long a,b;
        cin >> a >> b;

        if(a%b == 0){
            cout << 0 << endl;
        } else {
            cout << b - (a % b) << endl;
        }
    }
    
    return 0;
}