#include<stdio.h>

int main(void){
    int t;
    scanf("%d",&t);
    int n;
    for(int i =0; i < t; i++){
        scanf("%d",&n);
        int sum =0;
        for(int j =0; j<2;j++){
            int a = n%10;
            n = n/10;
            sum = sum + a;
        }
        printf("%d\n", sum);
    }

    return 0;
}