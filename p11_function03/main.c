#include<stdio.h>

int main();
void say_name(void);
void say_aisatsu(void);

int main(void){

    printf("�킽���̖��O��");
    say_name();

    printf("�ł��D\n");

    say_aisatsu();
    return 0;
}

void say_name(void){

    printf("�������݂���");

    return;
}

void say_aisatsu(void){
    printf("��낵�����肢���܂��D\n");
}