#include<stdio.h>
#include<string.h>

int main(void){

    char Berland[1000];
    scanf("%s", Berland);

    char Birland[1000];
    scanf("%s", Birland);
    
    int size1 = strlen(Berland);
    int size2 = strlen(Birland);
     
    if(size1 != size2){
        printf("NO");
    }
    else{
        int flag = 0;
        for(int k = 0; k < size1; k++){

            if(Berland[k] != Birland[(size1-1)-k]){
                flag++;
            }
        }

        if(flag == 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    
    return 0;
}