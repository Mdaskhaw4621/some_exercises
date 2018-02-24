#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	float med_f;
	
	printf("\n Digite a primeira nota: ");
	scanf("%d", &n1);
	printf("\n Digite a segunda nota: ");
	scanf("%d", &n2);
	
	med_f=(n1+n2)/2;
	 
	printf("\n A sua média final é: %.2f", med_f);
	
	return 0;
}
