#include<stdio.h>

int main();

int main(void){

    char buf[100];
    float n, m;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &n);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &m);
    m *= 0.01;

    printf("BMI��%f�ł��D\n", n / (m*m));


    return 0;
}