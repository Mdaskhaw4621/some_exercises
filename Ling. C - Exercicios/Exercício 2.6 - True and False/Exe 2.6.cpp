#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	printf("Entre com 2 numeros: ");
	scanf("%d %d", &x, &y);
	
	x==y?printf("O 1� � igual ao 2�?: True\n"):printf("O 1� � igual ao 2�?: False\n");
	x>y?printf("O 1� � maior que o 2�?: True\n"):printf("O 1� � maior que o 2�?: False\n");
	x!=y?printf("O 1� � diferente que o 2�?: True\n"):printf("O 1� � diferente que o 2�?: False\n");
	
	return 0;
}
