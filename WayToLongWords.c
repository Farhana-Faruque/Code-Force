#include<stdio.h>
#include<string.h>

int main(void){

    int n;
    scanf("%d", &n);
    char arr[n][1000];

    for(int i = 0; i < n; i++){
        scanf("%s", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int a = strlen(arr[i]); 
        if(a > 10){
            printf("%c%d%c\n", arr[i][0], (a-2), arr[i][a-1]);
        }
        else{
            printf("%s\n", arr[i]);
        }        
    }

    return 0;
}