#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale (LC_ALL,"Portuguese");
	int num1, num2, resultado;
	
	printf("Informe o valor A: ");
	scanf("%i", &num1);
	printf("Inoforme o valor de B: ");
	scanf("%i", &num2);
	
	resultado = 0;
	
	for (int i=0; i<num2; i++){
		resultado = resultado + num1;
	}
	printf ("%i * %i = %i", num1, num2, resultado);
	
	return 0;
}
