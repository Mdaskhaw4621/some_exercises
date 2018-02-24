#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float cateta, catetb, hipote;
	
	printf("\n Digite a medida do 1º cateto: ");
	scanf("%f", &cateta);
	printf("\n Digite a medida do 2º cateto: ");
	scanf("%f", &catetb);
	
	hipote=((cateta*cateta)+(catetb*catetb));

	
	printf("\n A medida da Hipotenusa é: %f", sqrt(hipote));
	
	return 0;
}
