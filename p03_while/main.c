#include<stdio.h>

int main();

int main(void){

    int i = 0;
    
    while(i < 9){
        if(i == 0){
            printf("ピコは10の%d乗です．\n", (i*3)-12);

        } else if(i == 1){
            printf("ナノは10の%d乗です．\n", (i*3)-12);
        } else if(i == 2){
            printf("マイクロは10の%d乗です．\n", (i*3)-12);
        } else if(i == 3){
            printf("ミリは10の%d乗です．\n", (i*3)-12);
        } else if(i == 5){
            printf("キロは10の%d乗です．\n", (i*3)-12);
        } else if(i == 6){
            printf("メガは10の%d乗です．\n", (i*3)-12);
        } else if(i == 7){
            printf("ギガは10の%d乗です．\n", (i*3)-12);
        } else if(i == 8){
            printf("テラは10の%d乗です．\n", (i*3)-12);                 
        } else {
            //なにも出力しない
        }

        i++;
    }

    return 0;
}