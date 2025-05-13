#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    int c,e;
    if(a<b){
        c = a;
        int d = b - a;
        e = d / 2;
        
    }
    else{
        c = b;
        int d = a - b;
        e = d / 2;
    }

    cout << c << " " << e << endl;
        
    
    return 0;
}