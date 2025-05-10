#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        int maxBlank = 0;
        int currentBlank = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == 0) {
                currentBlank++;
                maxBlank = max(maxBlank, currentBlank);
            } else {
                currentBlank = 0;
            }
        }

        cout << maxBlank << endl;
    }
    
    return 0;
}