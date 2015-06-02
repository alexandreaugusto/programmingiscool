#include <stdio.h>

int main() {
	int base, expoente, resultado = 1, contador;

	puts("Digite a base: ");
	scanf("%i", &base);

	puts("Digite o expoente: ");
	scanf("%i", &expoente);

	for(contador = 1; contador <= expoente; contador++)
		resultado *= base;

	printf("\n\nResultado: %i\n\n", resultado);

	return 0;
}