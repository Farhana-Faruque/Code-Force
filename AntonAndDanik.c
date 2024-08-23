#include<stdio.h>

int main(void){

    int t;
    scanf("%d ", &t);
    char arr[t];
    gets(arr);

    int anton = 0;
    int danik = 0;
    for(int i = 0; i<t; i++){
        if(arr[i] == 'A'){
            anton++;
        }
        else if(arr[i] == 'D'){
            danik++;
        }
    }

    if(anton > danik){
        printf("Anton");
    }
    else if (danik > anton){
        printf("Danik");
    }
    else if(danik == anton){
        printf("Friendship");
    }
    
    return 0;
}