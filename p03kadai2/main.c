#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
//	int number = rand() % 2024 + 1;
	int number = rand() % 30 + 2010;

	printf("����%d�N�ł��B", number);
	int heisei = number - 1988;
	if(number < 1990){
		printf("���a���̂ł��B\n");
	} else if (number > 1989) {
		if(number < 2019) {
			printf("����%d�ł��B\n", heisei);
		} else {
			int reiwa = number - 2018;
			printf("�ߘa%d�ł��B\n", reiwa);
		}
	}
	
	return 0;
}