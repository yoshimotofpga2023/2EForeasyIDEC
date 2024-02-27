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
        {"武田美咲", 52, 5, "E"},
        {"玉田耕治", 3, 5, "E"},
        {"霧島京子", 10, 2, "3"}
    };

    for (int i=0; i < 3; i++){
        printf("名前： %s, 学籍番号： %d%s%2d\n", student[i].name, student[i].grade, student[i].department, student[i].id);
    }
    return 0;
}