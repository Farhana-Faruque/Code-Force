#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        char arr[4];
        scanf("%s",arr);

        if((arr[0] == 'Y' || arr[0] == 'y') && (arr[1] == 'e' || arr[1] == 'E') && (arr[2] == 'S' || arr[2] == 's')){
            printf("YES");
        }
        else{
            printf("NO");
        }
        printf("\n");
    }

    return 0;
}