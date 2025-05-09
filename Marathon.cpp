#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        int count;
        if(b > a && c > a && d > a){
            count = 3;
        }
        else if((b > a && c > a) || (b > a && d > a) || (c > a && d > a)){
            count = 2;
        }
        else if(b > a || c > a || d > a){
            count = 1;
        }
        else{
            count = 0;
        }
        
        cout << count << endl;
    }
    
    return 0;
}