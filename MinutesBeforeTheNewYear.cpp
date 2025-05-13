#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int h,m;
        cin >> h >> m;

        if(h == 0 && m == 0){
            cout << 0 << endl;
        } else if(h == 23 && m == 59){
            cout << 1 << endl;
        } else {
            int totalMinutes = (23 - h) * 60 + (60 - m);
            cout << totalMinutes << endl;
        }
    }
    
    return 0;
}