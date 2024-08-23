#include<stdio.h>

int main(void){

    int t;
    scanf("%d", &t);
    char arr[8][8];
    char word[8];
    
    for(int i = 0; i < t; i++){
        int l = 0;
        for(int j = 0; j<8; j++){
            for(int k = 0; k<8; k++){
                scanf(" %c", &arr[j][k]);
            }
        }

        for(int j = 0; j<8; j++){
            for(int k = 0; k<8; k++){
                if(arr[j][k] != '.'){
                    word[l] = arr[j][k];
                    l++;
                }
            }
        }

        for(int o = 0; o < l; o++){
            printf("%c", word[o]);
        }
        printf("\n");
    }

    return 0;
}