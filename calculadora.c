#include <stdio.h> //essa é a biblioteca padrão da linguagem C, onde se encontram algumas funções usuais, como o printf e o scanf
#include <stdlib.h>

void main() { //*void* main diz que a função main() não retornará nada

    float num1, num2, resultado; //conforme eu disse na semana passada, na linguagem C você deve declarar todas variáveis que irá usar no começo do programa principal. Setei todas como float, pois posso fazer as operações com número decimal e posso obter o resultado da mesma forma
    char op; //o tipo 'char' da linguagem C ocupa somente 1 byte na memória

    printf("Selecione uma opção:\n\n(+) Adição\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n(x) Sair\n\n"); //para saída de dados, utilizamos aqui nesse exemplo o printf, que é uma função onde você pode imprimir valores formatados
    scanf("%c", &op); //para leitura de dados de entrada do usuário, utilizamos o scanf, onde é necessário especificar que tipo de dado se espera (%c => char, %f => float, %d => int, entre outros)

    while(op != 'x') { //enquanto a opção do usuário for qualquer outra diferente de x, que significa sair do programa...

	    printf("Digite o primeiro numero: ");
	    scanf("%f", &num1); //leitura e atribuição do primeiro operando

	    printf("Digite o segundo numero: ");
	    scanf("%f", &num2); //leitura e atribuição do segundo operando

	    switch(op) { //escolha, dependendo do valor da variável op
		case '+': //se for igual a +
		    resultado = num1 + num2; //utilize o operador de soma
		    break; //tem que usar senão executa o que está abaixo no bloco switch...case
		case '-': //se for igual a -
		    resultado = num1 - num2; //utilize o operador de subtração
		    break;
		case '*': //se for igual a *
		    resultado = num1 * num2; //utiliza o operador multiplicação
		    break;
		case '/':
		    if(num1 == 0 || num2 == 0) //faz o teste, se qualquer dos operandos for zero, dá uma mensagem para invalidar a operação...só o segundo operando faria o programa falhar. Porém, porque você dividiria zero sabendo que o resultado é zero?
			printf("\n\nZero nao eh divisivel\n\n"); // se algum bloco (if, else, for, while (etc) tiver apenas uma linha abaixo, conforme esse exemplo, não precisa abrir e fechar chaves
		    else
			resultado = num1 / num2;
		    break;
		default: // se o usuário digitar qualquer outra coisa diferente de + - * / x cai aqui e dá essa mensagem abaixo
		    printf("\n\nOpcao invalida\n\n");
	    }

	    printf("O resultado da operação %c eh igual a %.2f\n\n", op, resultado); //Aqui exibimos a saída formatada do resultado da operação matemática escolhida... %.2f significa que exibiremos apenas duas casas após a vírgula no resultado

	    printf("Selecione uma opção:\n\n(+) Adição\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n(x) Sair\n\n"); //Aqui fazemos a leitura novamente da variável 'op', pra saber se o usuário quer executar alguma outra operação ou sair do programa
	    scanf(" %c", &op); //Notem que há um espacinho entre a primeira aspas e o %c ... depois explico o porquê disso!

	    

    }

    //system("pause"); //comentei essa linha porque executei no terminal do linux e não existe esse comando, utilizado às vezes no Windows pra conseguir visualizar o programa
}
