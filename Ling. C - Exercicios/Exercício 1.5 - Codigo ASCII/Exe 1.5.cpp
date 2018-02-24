#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char caracter;
	
	printf("\n Digite um caracter: ");
	scanf("%c", &caracter);
	
	printf("%d\n", caracter);
	printf("%x\n", caracter);
	printf("%o\n", caracter);
	
	return 0;
}
