#include<bits/stdc++.h>
using namespace std;

long long intoOne(long long n) {
    int ans = 0;

    while (n%2 == 0){
        n /= 2;
        ans++;
    } 

    while (n%3 == 0){
        n = (n/3) * 2;
        ans++;

        while (n%2 == 0){
        n /= 2;
        ans++;
        }
    }

    while (n%5 == 0){
        n = (n/5) * 4;
        ans++;

        while (n%2 == 0){
        n /= 2;
        ans++;
        }
    }

    if(n != 1){
        return -1;
    }

    return ans;
}

int main(void){
    int test;
    cin >> test;

    while (test--) {
        long long n;
        cin >> n;

        int result = intoOne(n);
        cout << result << endl;
    }

    return 0;
}