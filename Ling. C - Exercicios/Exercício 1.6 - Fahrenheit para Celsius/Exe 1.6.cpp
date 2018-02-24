#include <stdio.h>
#include <iostream>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float fahren, celsius;
	
	printf("\n Digite a temperatura em °F: ");
	scanf("%f", &fahren);
	
	celsius=((fahren-32)*5)/9;
	
	printf("\n A temperatura em °C é: %.1f", celsius);
	
	return 0;
}
