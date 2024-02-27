#include<stdio.h>
#include<math.h>

int main();

int main(void){

    char buf[100];
    float n, m, l;
    double tate, yoko, naname;

    //アスペクト比縦
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &n);


    //アスペクト比横
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &m);


    //インチ
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &l);

    double aRate;
    aRate = sqrt(((n*n)+(m*m)));
    naname = l / aRate;
    tate = naname * n;
    tate *= 25.4;
    yoko = naname * m;
    yoko *= 25.4;


    printf("モニタの縦は%fmm、横は%fmmです．\n", tate, yoko);


    return 0;
}