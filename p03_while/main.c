#include<stdio.h>

int main();

int main(void){

    int i = 0;
    
    while(i < 9){
        if(i == 0){
            printf("�s�R��10��%d��ł��D\n", (i*3)-12);

        } else if(i == 1){
            printf("�i�m��10��%d��ł��D\n", (i*3)-12);
        } else if(i == 2){
            printf("�}�C�N����10��%d��ł��D\n", (i*3)-12);
        } else if(i == 3){
            printf("�~����10��%d��ł��D\n", (i*3)-12);
        } else if(i == 5){
            printf("�L����10��%d��ł��D\n", (i*3)-12);
        } else if(i == 6){
            printf("���K��10��%d��ł��D\n", (i*3)-12);
        } else if(i == 7){
            printf("�M�K��10��%d��ł��D\n", (i*3)-12);
        } else if(i == 8){
            printf("�e����10��%d��ł��D\n", (i*3)-12);                 
        } else {
            //�Ȃɂ��o�͂��Ȃ�
        }

        i++;
    }

    return 0;
}