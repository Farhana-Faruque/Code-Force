#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int rating;
    for(int i = 0; i<t;i++){
        scanf("%d",&rating);
        if(rating <= 1399){
            printf("Division 4\n");
        }
        else if(rating >= 1400 && rating <= 1599){
            printf("Division 3\n");
        }
        else if (rating >= 1600 && rating <= 1899){
            printf("Division 2\n");
        }
        else{
            printf("Division 1\n");
        }
    }
    return 0;
}