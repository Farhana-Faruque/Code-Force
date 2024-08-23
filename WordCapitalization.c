#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){

    char s1[10000];
    scanf("%s", s1);

    if (islower(s1[0])) {
        s1[0] = toupper(s1[0]);
    }

    printf("%s",s1);

    return 0;
}