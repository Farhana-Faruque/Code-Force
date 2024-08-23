#include<stdio.h>

int main(void){

    int a,b,c;
    int n;
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a != b && a != c){
            printf("%d", a);
        }
        else if(b != a && b != c){
            printf("%d", b);
        }
        else if(c != a && c != b){
            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}