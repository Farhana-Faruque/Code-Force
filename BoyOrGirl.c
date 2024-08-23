#include<stdio.h>
#include<string.h>

int main(void){

    char str[100];
    gets(str);

    int count = strlen(str);
    int d = count;

    for(int i = 0; i< count; i++){
        for(int j = i+1; j < count; j++){
            if(str[i] == str[j]){
                d--;
                break;
            }
        }
    }
    if(d%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}