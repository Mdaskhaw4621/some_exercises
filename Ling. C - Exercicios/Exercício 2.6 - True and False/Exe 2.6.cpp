#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	printf("Entre com 2 numeros: ");
	scanf("%d %d", &x, &y);
	
	x==y?printf("O 1º é igual ao 2º?: True\n"):printf("O 1º é igual ao 2º?: False\n");
	x>y?printf("O 1º é maior que o 2º?: True\n"):printf("O 1º é maior que o 2º?: False\n");
	x!=y?printf("O 1º é diferente que o 2º?: True\n"):printf("O 1º é diferente que o 2º?: False\n");
	
	return 0;
}
