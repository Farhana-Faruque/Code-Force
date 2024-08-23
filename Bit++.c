#include<stdio.h>

int main(void){
    int X = 0;
    int n,i,j;
    scanf("%d", &n);

    char space;
    scanf("%c", &space);

    char arr[n][4];
    for(i = 0; i < n; i++){
        gets(arr[i]);
    }

    for(i = 0; i < n ; i++){
        if(arr[i][1] == '+' || arr[i][2] == '+')
            ++X;
        else if(arr[i][1] == '-' || arr[i][2] == '-')
            X--;
    }   

    printf("%d", X);
    
    return 0;
}