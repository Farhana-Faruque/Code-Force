#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
       string s;
       cin >> s;

       if(s == "abc"){
        cout << "YES" << endl;
       }
       else if(s[0] == 'a'){
        cout << "YES" << endl;
       }
       else if(s[1] == 'b'){
        cout << "YES" << endl;
       }
       else if(s[2] == 'c'){
        cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;
       }
        
    }
    
    return 0;
}