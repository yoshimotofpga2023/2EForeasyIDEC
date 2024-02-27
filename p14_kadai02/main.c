#include<stdio.h>

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
    int i,j;
    int n = 6;
    int array[] = {1, 10, 3, 5, 1, 6};
    arrayprint(array, n);

    for (j=0; j < n-1; j++){
        for (i=0; i < n-1; i++){
            if(array[i] < array[i+1]){
                swap(&array[i], &array[i+1]);
            }
        }
    }
    arrayprint(array, n);

    return 0;
}