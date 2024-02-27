#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void arrayprint(int a[], int N){
    int i;
    for (i=0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}

int main();

int main(void){

    srand((unsigned int)time(NULL));    
    int n = 100;

    int i,j;
    int array[100] = {};

    for (int ii=0; ii<n; ii++){
        array[ii] = rand() % 100 + 1;
    }

    printf("before\n");
    arrayprint(array, n);

    for (j=0; j < n-1; j++){
        for (i=0; i < n-1; i++){
            if(array[i] > array[i+1]){
                swap(&array[i], &array[i+1]);
            }
        }
    }
    printf("after\n");
    arrayprint(array, n);

//    free(seed);
    return 0;
}