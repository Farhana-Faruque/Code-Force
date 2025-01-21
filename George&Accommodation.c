#include<stdio.h>

int main(void){
    int t,p,q;
    scanf("%d",&t);
    int flag = 0;
    for(int i = 0; i<t; i++){
        scanf("%d %d", &p,&q);
        if(p<=(q-2)){
            flag++;
        }
    }
    printf("%d", flag);

    return 0;
}
