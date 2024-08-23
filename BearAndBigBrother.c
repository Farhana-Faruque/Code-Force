#include<stdio.h>

int main(void){

    int limak, bob;
    scanf("%d %d", &limak, &bob);
    int year = 0;

    for(int i = 1; ; i++){
        limak = 3 * limak;
        bob = 2 * bob;
        year++;
        if(limak > bob){
            break;
        }
    }

    printf("%d", year);

    return 0;
}