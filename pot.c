// www.GeeksBR.com
 
#include <stdio.h>
 
int pot(int base, int exp)
{
	if (exp == 0)
		return 1;
	else if(exp == 1)
		return base;

	printf("oi\n");
	
	return base * pot(base, exp - 1);
}
 
int main(int argc, char *argv[])
{
	int base, exp;
	
	printf("Base: ");
	scanf("%d", &base);
	printf("Expoente: ");
	scanf("%d", &exp);
	
	printf("\nResultado: %d\n", pot(base, exp));
	return 0;
}

