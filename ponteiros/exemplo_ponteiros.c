#include <stdio.h
#include <stdlib.h>

int	main()
{
	int *valor1;
	int valor2 = 50;
	
	valor1 = &valor2;

	printf("Valor da variável valor2: %d\n:", valor2);
	printf("Endereço da variável valor2: %p\n:", &valor2);
	printf("Conteúdi da variável valor1: %p\n:", valor1);
	printf("Conteúdo apontado pela variável valor1: %d\n:", *valor1);
}
