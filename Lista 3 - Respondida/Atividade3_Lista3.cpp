#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float altura, menorAltura;
	int alturaIgual, contador = 1;
	
		while(contador <= 10){
		printf("Informa a altura da %d� pessoa: ", contador);
		scanf("%f", &altura);
		
		if(altura == menorAltura) {
			alturaIgual++;
		}else if((altura < menorAltura) || (menorAltura == 0)){
			menorAltura = altura;
		}
		
		contador++;
	}
	printf("\n=================================================================\n");
	printf("\nA menor altura � de %.2fm (%d pessoas(s))", menorAltura,alturaIgual);
	
	return 0;
}
