#include<stdio.h>

int main();
void say_name(void);
void say_aisatsu(void);

int main(void){

    printf("わたしの名前は");
    say_name();

    printf("です．\n");

    say_aisatsu();
    return 0;
}

void say_name(void){

    printf("たけだみさき");

    return;
}

void say_aisatsu(void){
    printf("よろしくお願いします．\n");
}