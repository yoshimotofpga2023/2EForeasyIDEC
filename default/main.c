#include <stdio.h>

int main(void)
{
	int price;
	int discount;
		
	printf("定価を入力して下さい : ");
	scanf("%d",&price);
		
	for ( discount = 1; discount < 10; discount++ )
	{
		printf("%d割引 = %d円\n", discount , price - (int)(price * discount * 0.1 ));
	}
		
	return 0;
}