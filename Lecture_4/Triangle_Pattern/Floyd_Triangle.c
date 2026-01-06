#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int n = 1; // Initialize n to 1 

    for(int i = 0; i <num; i++){
        for(int j = 0; j < i+1; j++){
            printf("%d", n);
            n++;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}