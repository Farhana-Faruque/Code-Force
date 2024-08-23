#include<stdio.h>

int main(void){
    int t;
    scanf("%d ", &t);

    char word1[4], word2[4];

    for(int i =0; i<t; i++){
        scanf("%s %s", &word1, &word2);

        char temp;

        temp = word1[0];
        word1[0] = word2[0];
        word2[0] = temp;

        printf("%s %s", word1, word2);
        printf("\n");
    }
    return 0;
}