#include<stdio.h>

int main(void){

    int n,i,flag = 0;
    scanf("%d", &n);
    int arr[n*2];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n ; i++){
        if(arr[i] == 1){
            flag = 1;
        }
    }

    if(flag == 1){
        printf("Hard");
    }
    else{
        printf("Easy");
    }

    return 0;
}