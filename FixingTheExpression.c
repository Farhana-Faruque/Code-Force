#include<stdio.h>

int main(void){
    int t,l,r;
    scanf("%d",&t);
    char c;
    for(int i = 0;i<t;i++){
        scanf("%d%c%d", &l,&c,&r);
        if((l>r && c == '>') || (l==r && c == '=') || (l<r && c == '<')){
            printf("%d%c%d",l,c,r);
        }
        else{
            if(l>r){
                c = '>';
                printf("%d%c%d",l,c,r);
            }
            else if(l<r){
                c = '<';
                printf("%d%c%d",l,c,r);
            }
            else{
                c = '=';
                printf("%d%c%d",l,c,r);
            }
        }
        printf("\n");
    }
    return 0;
}