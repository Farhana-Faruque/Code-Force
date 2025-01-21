#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int a,b;
    for(int i = 0; i<t; i++){
        scanf("%d %d", &a,&b);
        int c = (a+b)/2;
        c = (c-a)+(b-c);
        printf("%d\n", c);
    }
    return 0;
}