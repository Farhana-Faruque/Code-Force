#include<stdio.h>
#include<string.h>

int main(void){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        char arr[n];
        scanf(" %s", arr);

        if(n > 5){
            printf("NO\n");
        }
        else{
            int t,I,M,U,R;
            t = I = M = U = R =0;
            for(int j = 0; j<n; j++){
                switch (arr[j])
                {
                case 'T':
                    t++;
                    break;
                case 'i':
                    I++;
                    break;
                case 'm':
                    M++;
                    break;
                case 'u':
                    U++;
                    break;
                case 'r':
                    R++;
                    break;
                }
            }
            if(t == 1 && I == 1 && M == 1 && U == 1 && R == 1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}


