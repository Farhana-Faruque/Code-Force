#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    int countm = 0, countc = 0;
    for(int i = 0; i < test; i++){
        int m,c;
        cin >> m >> c;

        if(m > c){
            countm++;
        }else if(c > m){
            countc++;
        }
    }
    if(countm > countc){
        cout << "Mishka" << endl;
    }else if(countc > countm){
        cout << "Chris" << endl;   
    }else{
        cout << "Friendship is magic!^^" << endl;
    }

    
    return 0;
}