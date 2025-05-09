#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int x, y;
        cin >> x >> y;
        int temp;

        if(x > y){
            temp = x;
            x = y;
            y = temp;
        }
        

        cout << x << " " << y << endl;
    }
    
    return 0;
}