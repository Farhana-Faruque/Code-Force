#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    int arr[test][3];
    for(int i = 0; i < test; i++){
        for(int j = 0; j<3;j++){
            cin >> arr[i][j];
        }
        
    }
    int x=0,y=0,z=0;
         
    for(int i = 0; i < test; i++){
        x = x + arr[i][0];
        y = y + arr[i][1];
        z = z + arr[i][2];
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}