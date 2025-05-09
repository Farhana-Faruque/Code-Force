#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        string s;
        cin >> s;
        int counta = 0, countb = 0;
        for(int j = 0; j < 5; j++){
            if(s[j] == 'A'){
                counta++;
            }else{
                countb++;
            }
        }
        if(counta > countb){
            cout << "A" << endl;
        }else if(countb > counta){
            cout << "B" << endl;
        }
        
    }
    
    return 0;
}