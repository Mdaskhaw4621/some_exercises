#include <stdio.h>
#include <iostream>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(ano%4 && ano%100){
		printf("Ano n�o � bissexto");
	}
	else{
		printf("Ano � bissexto");	
	}
	return 0;
}
