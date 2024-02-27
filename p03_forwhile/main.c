#include<stdio.h>

int main();

int main(void){

    int i, j;
    i = 0;
    while (i < 10){
        printf("%d", i);
        j = 0;
        while(j < i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }


    return 0;
}