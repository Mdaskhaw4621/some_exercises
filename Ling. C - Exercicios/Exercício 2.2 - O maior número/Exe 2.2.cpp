#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Informe o 1� n�mero: ");
	scanf("%d", &n1);
	printf("Informe o 2� n�mero: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("\n%d>%d", n1, n2);
		printf(" (%d � maior que %d)", n1, n2);
	}
	else{
		printf("%d<%d", n1, n2);
		printf(" (%d � menor que %d)", n1, n2);
	}
	return 0;
}
