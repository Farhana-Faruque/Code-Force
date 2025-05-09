#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int a,b,c;
        cin >> a >> b >> c;

        if(c > a && c > b){
            cout << "STAIR" << endl;
        }
        else if (b > a && b > c){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }

    }
    
    return 0;
}