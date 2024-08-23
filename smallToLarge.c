#include<stdio.h>

int main(void){

    int t;
    scanf("%d",&t);

    int arr[3];

    for(int i = 1; i<= t;i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[j]);
        }

        for(int k = 1; k<3; k++){
            for(int j =0; j<=k; j++){
                if(arr[k] < arr[j]){
                    int temp = arr[k];
                    arr[k] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("Case %d : ", i);

        for(int j = 0; j<3; j++){
            printf("%d ", arr[j]);
        }
    }
    return 0;
}