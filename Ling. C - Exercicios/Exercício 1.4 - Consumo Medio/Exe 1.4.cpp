#include <stdio.h>
#include <iostream>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float dist_perc, total_comb, cons_med;
	
	printf("\n Informe o total de litros de combustivel gasto: ");
	scanf("%f", &total_comb);
	printf("\n Informe a distancia percorrida: ");
	scanf("%f", &dist_perc);
	
	cons_med=total_comb/dist_perc;
	
	printf("\nO consumo medio foi: %f", cons_med);
	
	
	
	
	return 0;
}
