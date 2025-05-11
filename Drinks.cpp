#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int j = 0; j < n; j++)
        cin >> arr[j];

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum = sum + arr[j];
    }

    double average = (double)sum / n;

    cout << average << endl;

    return 0;
}