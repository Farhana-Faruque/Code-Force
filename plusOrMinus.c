#include<stdio.h>

int main(void){

    int a,b,c;
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &a, &b, &c);

        if(a + b == c){
            printf("+\n");
        }
        else if(a - b == c){
            printf("-\n");
        }   
    }

    return 0;
}