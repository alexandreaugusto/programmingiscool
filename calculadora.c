#include <stdio.h>
#include <stdlib.h>

void main() {

    float num1, num2, resultado;
    char op;

    printf("Selecione uma opção:\n\n(+) Adição\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n(x) Sair\n\n");
    scanf("%c", &op);

    while(op != 'x') {

	    printf("Digite o primeiro numero: ");
	    scanf("%f", &num1);

	    printf("Digite o segundo numero: ");
	    scanf("%f", &num2);

	    switch(op) {
		case '+':
		    resultado = num1 + num2;
		    break;
		case '-':
		    resultado = num1 - num2;
		    break;
		case '*':
		    resultado = num1 * num2;
		    break;
		case '/':
		    if(num1 == 0 || num2 == 0)
			printf("Zero nao eh divisivel");
		    else
			resultado = num1 / num2;
		    break;
		default:
		    printf("Opcao invalida");
	    }

	    printf("O resultado da operação %c eh igual a %.2f\n\n", op, resultado);

	    printf("Selecione uma opção:\n\n(+) Adição\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n(x) Sair\n\n");
	    fflush(stdin);
	    scanf(" %c", &op);

	    

    }

    //system("pause");
}
