#include <stdio.h>
#include <locale.h>
main() {

setlocale(LC_ALL, "Portuguese");

float x, y;
char op;
printf("\n Express�o? ");
scanf("%f %c %f", &x, &op, &y);
switch( op ) {
case '+': printf("\n valor = %.2f", x+y); break;
case '-': printf("\n valor = %.2f", x-y); break;
case '*': printf("\n valor = %.2f", x*y); break;
case ':': ;
case '/': printf("\n valor = %.2f", x/y); break;
default : printf("\n Operador inv�lido: %c",op);
}
}
