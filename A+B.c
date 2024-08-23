#include<stdio.h>

int main(void){

    int n,i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i<n; i++){
        int a, b;
        scanf("%d + %d", &a, &b);

        if(a >= 0 && b <= 9){
            int results = a + b;
            arr[i] = results;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}