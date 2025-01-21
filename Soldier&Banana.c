#include<stdio.h>

int main(void){
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);
    int sum = 0;
    int need = 0;
    for(int i = 1; i <= w;i++){
        sum = (i*k) + sum;
    }
    if(n >= sum){
        printf("%d", need);
    }
    else{
        need = sum - n;
        printf("%d", need);
    }

    return 0;
}