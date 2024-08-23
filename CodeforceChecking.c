#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    char c;

    for(int i = 0; i < t ; i++){
        scanf(" %c", &c);

        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's' ){
            printf("Yes");
        }
        else{
            printf("No");
        }
        printf("\n");
    }
    return 0;
}