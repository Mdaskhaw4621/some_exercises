#include <stdio.h>
#include <iostream>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(ano%4 && ano%100){
		printf("Ano não é bissexto");
	}
	else{
		printf("Ano é bissexto");	
	}
	return 0;
}
