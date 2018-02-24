#include <stdio.h>
#include <iostream>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int e;
	
	printf("Informe o numero de erros: ");
	scanf("%d", &e);
	
	e==21?printf("%d erro detectado", e): e>1?printf("%d erros detectados",e):printf("Nenhum erro detectado!");
	return 0;
}
