#include<stdio.h>
#include<string.h>

int main(void){

    char arr[150];
    gets(arr);

    int d = strlen(arr);

    int b = (d/2)+1;
    char arr2[b];
    char temp;

    arr2[0] = arr[0];
    for(int i =2; i<d; i=i+2){
        arr2[i/2] = arr[i];
    }
    
    for(int i = 1; i<b; i++){
       for(int j = 0; j <= i; j++){
            if(arr2[i]<arr2[j]){
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    arr[0] = arr2[0];
    for(int i =2; i<d; i=i+2){
        arr[i] = arr2[i/2];
    }

    for(int i =0; i<d;i++){
        printf("%c",arr[i]);
    }

    return 0;
}