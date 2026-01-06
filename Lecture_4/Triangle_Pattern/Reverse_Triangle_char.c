#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int ch = 'A';

    for(int i = 0; i<num; i++){
        for(int j = i; j>0; j--){
            printf("%c ",ch+j-1);
        }
        printf("\n");
    }
    return 0;
}