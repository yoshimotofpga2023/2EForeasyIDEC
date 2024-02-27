#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
//	int number = rand() % 2024 + 1;
	int number = rand() % 30 + 2010;

	printf("西暦%d年です。", number);
	int heisei = number - 1988;
	if(number < 1990){
		printf("昭和より昔です。\n");
	} else if (number > 1989) {
		if(number < 2019) {
			printf("平成%dです。\n", heisei);
		} else {
			int reiwa = number - 2018;
			printf("令和%dです。\n", reiwa);
		}
	}
	
	return 0;
}