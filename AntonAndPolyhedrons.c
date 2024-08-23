#include<stdio.h>
#include<string.h>

int main(void){

    char arr[20];
    int cube = 6;
    int tetra = 4;
    int icosa = 20;
    int dode = 12;
    int octra = 8;

    int sum = 0;
    
    int t;
    scanf("%d ", &t);

    for(int i = 1; i <= t; i++){
        gets(arr);

        if(strcmp(arr, "Tetrahedron") == 0){
            sum = sum + tetra;
        }
        else if(strcmp(arr, "Cube") == 0){
            sum = sum + cube;
        }
        else if(strcmp(arr, "Octahedron") == 0){
            sum = sum + octra;
        }
        else if(strcmp(arr, "Dodecahedron") == 0){
            sum = sum + dode;
        }
        else if(strcmp(arr, "Icosahedron") == 0){
            sum = sum + icosa;
        }
    }
    
    printf("%d", sum);

    return 0;
}