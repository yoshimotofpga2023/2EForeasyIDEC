#include<stdio.h>

struct meibo
{
    char name[20];
    int id;
    int grade;
    char department[10];
};

int main();

int main(void){

    struct meibo student[3] ={
        {"���c����", 52, 5, "E"},
        {"�ʓc�k��", 3, 5, "E"},
        {"�������q", 10, 2, "3"}
    };

    for (int i=0; i < 3; i++){
        printf("���O�F %s, �w�Дԍ��F %d%s%2d\n", student[i].name, student[i].grade, student[i].department, student[i].id);
    }
    return 0;
}