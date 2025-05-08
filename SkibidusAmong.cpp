#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        string str;
        cin >> str;

        int size = str.size();
        for(int j = size - 2; j < size; j++){
            if(str[j] == 'u' && str[j + 1] == 's'){
                str[j] = 'i';
                str.erase(j+1);
            }
        }
        cout << str << endl;

    }
    cout << endl;

    return 0;
}