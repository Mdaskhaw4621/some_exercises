#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, sala_reaju;
	
	printf("Informe o valor do seu salário: ");
	scanf("%f", &salario);
	
	sala_reaju=(salario*0.05)+salario;
	
	if(salario<=750.00){
		printf("\nO seu salario foi reajustado para %.2f", sala_reaju+100);
	}
	else{
		printf("\nSeu salario foi reajustado para %.2f", sala_reaju);
	}
	
	return 0;
}
