#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
    int ticket;
    int arr[6];

    for(int i = 1; i <= n; i++){
        scanf("%d", &ticket);

        for(int j = 5; j >= 0; j--){
            arr[j] = ticket % 10;
            ticket = ticket / 10;
        }

        int sum1 = 0, sum2 = 0;
        sum1 = arr[0] + arr[1] + arr[2];
        sum2 = arr[3] + arr[4] + arr[5];
        if(sum1 == sum2){
            printf("YES");
        }
        else if(sum1 != sum2){
            printf("NO");
        }

        printf("\n");
    }
    
    return 0;
}