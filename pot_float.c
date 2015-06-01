#include <stdio.h>
 
float pot_float(float x, int y)
{
	if(y == 0)
		return 1;
		
	float temp = pot_float(x, y / 2);
	
	if(y % 2 == 0)
		return temp * temp;
	
	if(y > 0)
		return x * temp * temp;
	return (temp * temp) / x;
}
 
int main ()
{
	float base;
	int exp;
	
	printf("Base: ");
	scanf("%f", &base);
	printf("Expoente: ");
	scanf("%d", &exp);
	
	printf("\nResultado: %.2f\n", pot_float(base, exp));
	return 0;
}

