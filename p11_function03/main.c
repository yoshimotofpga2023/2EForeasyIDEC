#include<stdio.h>

int main();
void say_name(void);
void say_aisatsu(void);

int main(void){

    printf("‚í‚½‚µ‚Ì–¼‘O‚Í");
    say_name();

    printf("‚Å‚·D\n");

    say_aisatsu();
    return 0;
}

void say_name(void){

    printf("‚½‚¯‚¾‚İ‚³‚«");

    return;
}

void say_aisatsu(void){
    printf("‚æ‚ë‚µ‚­‚¨Šè‚¢‚µ‚Ü‚·D\n");
}