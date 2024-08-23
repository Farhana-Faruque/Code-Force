#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertToLower(char *str) {
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main(void){

    char s1[100];
    scanf("%s", s1);
    char s2[100];
    scanf(" %s", s2);

    convertToLower(s1);
    convertToLower(s2);

    int count = strcmp(s1,s2);

    printf("%d", count);

    return 0;
}