#include <stdio.h>

int main(void)
{
	int price;
	int discount;
		
	printf("�艿����͂��ĉ����� : ");
	scanf("%d",&price);
		
	for ( discount = 1; discount < 10; discount++ )
	{
		printf("%d���� = %d�~\n", discount , price - (int)(price * discount * 0.1 ));
	}
		
	return 0;
}