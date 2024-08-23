#include<stdio.h>
#include<string.h>

int main(void){

    int t;
    scanf("%d ", &t);
    char s2[11] = "codeforces";
    char s[12];
    int flag = 0;

    for(int i = 1; i <= t; i++){
        scanf(" %s", &s);

        for(int j = 0; j<=10; j++){
            if(s[j] != s2[j]){
                flag++;
            }
        }

        printf("%d\n", flag);
        flag = 0;
    }
    
    return 0;
}