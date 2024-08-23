#include<stdio.h>

int main(void){

    int n,i,j, x =0;
    int flag = 0;
    scanf("%d", &n);
    int arr[n][3];

    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        if(arr[i][0] == 1  && arr[i][1] == 1){
            flag++;
        }
        else if(arr[i][0] == 1 && arr[i][2] == 1){
            flag++;
        }
        else if(arr[i][1] == 1 && arr[i][2] == 1){
            flag++;
        }
    }
    
    printf("%d", flag);

    return 0;
}