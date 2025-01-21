#include<stdio.h>

int main(void){
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0; i<t;i++){
        scanf("%d",&n);
        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[j]);
        }
        int flag = 0;
        for(int j = 0; j < (n-1); j++){
            if((arr[j] - arr[j+1] == 5) || (arr[j] - arr[j+1] == 7) || (arr[j] - arr[j+1] == -7) || (arr[j] - arr[j+1] == -5)){
                flag = 1;
            }
            else{
                flag = 0;
                printf("No");
                break;
            }
        }
        if(flag != 0){
            printf("Yes");
        }
        printf("\n");
    }
    return 0;
}