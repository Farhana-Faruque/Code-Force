#include<stdio.h>

int main(void){
    int t;
    scanf("%d",&t);
    int a,b,c;
    for(int i =0; i<t;i++){
        scanf("%d %d %d", &a,&b,&c);
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        for(int k = 0; k < 3; k++){
            for(int j = 0; j < 2; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        printf("%d\n", arr[1]);
    }
        
    return 0;
}