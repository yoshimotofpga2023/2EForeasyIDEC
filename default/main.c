#include <stdio.h>

int main(void)
{
	int price;
	int discount;
		
	printf("’è‰¿‚ð“ü—Í‚µ‚Ä‰º‚³‚¢ : ");
	scanf("%d",&price);
		
	for ( discount = 1; discount < 10; discount++ )
	{
		printf("%dŠ„ˆø = %d‰~\n", discount , price - (int)(price * discount * 0.1 ));
	}
		
	return 0;
}