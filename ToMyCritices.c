#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        if(a+b >= 10 || a+c >= 10 || b+c >= 10){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}