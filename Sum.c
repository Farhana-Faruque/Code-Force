#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int a,b,c;
    for(int i = 0; i<t;i++){
        scanf("%d %d %d", &a,&b,&c);
        if(a == b+c || b == a+c || c == a+b){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}