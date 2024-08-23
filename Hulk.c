#include<stdio.h>

int main(void){
    int n;
    int i;
    scanf("%d", &n);

    printf("I hate");

    for(i = 2; i <= n; i++){
        if(i%2 == 1){
            printf(" that I hate");
        }
        else if(i%2 == 0){
            printf(" that I love");
        }
       
    }

    printf(" it");
    return 0;
}