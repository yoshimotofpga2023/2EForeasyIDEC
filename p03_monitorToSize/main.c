#include<stdio.h>
#include<math.h>

int main();

int main(void){

    char buf[100];
    float n, m, l;
    double tate, yoko, naname;

    //�A�X�y�N�g��c
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &n);


    //�A�X�y�N�g�䉡
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &m);


    //�C���`
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &l);

    double aRate;
    aRate = sqrt(((n*n)+(m*m)));
    naname = l / aRate;
    tate = naname * n;
    tate *= 25.4;
    yoko = naname * m;
    yoko *= 25.4;


    printf("���j�^�̏c��%fmm�A����%fmm�ł��D\n", tate, yoko);


    return 0;
}