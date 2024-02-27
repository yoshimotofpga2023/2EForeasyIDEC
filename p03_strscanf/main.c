#include<stdio.h>

int main();

int main(void){

    char buf[100];
    fgets(buf, sizeof(buf), stdin);

    char str[10];
    sscanf(buf, "%s", str);
    printf("hello %s\n", str);


    return 0;
}