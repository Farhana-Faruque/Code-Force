#include<stdio.h>
int main(void){
    int t,n;
    scanf("%d",&t);
    for(int i = 0; i<t;i++){
        scanf("%d", &n);
        int arr[n];
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(int j = 0;j<n-2;j++){
            if((arr[j] != arr[j+1]) && (arr[j]!= arr[j+2])){
                printf("%d\n", j+1);
                break;  
            }
            else if((arr[j] != arr[j+1]) && (arr[j] == arr[j+2])){
                printf("%d\n", j+2);
                break;  
            }
            else if((arr[j] == arr[j+1]) && (arr[j] != arr[j+2])){
                printf("%d\n", j+3);
                break;  
            }
        }
    }
    return 0;
}