#include<stdio.h>
#include<string.h>
#include<ctype.h>

void converttolower(char *str) {
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
   }
}
void converttoUpper(char *str){
    while (*str) {
        if (islower(*str)) { 
           *str = toupper(*str);
        }
        str++;
   }
}

int main(void){

    char s1[100];
    gets(s1);
    
    int countUp = 0;
    int countLow = 0;
    for(int i = 0; i < strlen(s1); i++){
        if (isupper(s1[i])){
            countUp++;
        }
        if (islower(s1[i])){
            countLow++;
        }
    }

    if(countUp > countLow){
        converttoUpper(s1);
    }
    else if(countUp < countLow){
        converttolower(s1);
    }
    else if(countUp == countLow){
        converttolower(s1);
    }
    
    printf("%s",s1);

    return 0;
}
