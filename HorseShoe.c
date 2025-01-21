#include<stdio.h>

int main(void){
    int arr[4];
    for(int i = 0; i<4;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 0;
    for(int i = 0; i<3;i++){
        if(arr[i] == arr[i+1] || arr[i] == arr[i+2] || arr[i] == arr[i+3]){
            flag++;
        }
    }
    printf("%d",flag);
    return 0;
}