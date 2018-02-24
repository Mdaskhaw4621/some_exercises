#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n, n_pole=0;
	
	 for(n=0.5; n<=60; n+=0.5){
			printf("%.1f\" - %.2f\n", n_pole+=0.5, n*2.54);
		}
		
	return 0;
}
