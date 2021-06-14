#include<stdio.h>
#include<locale.h>

int main(){
	
	int fatorial = 1, num, contador = 0;
	
	printf("Informe um número para calcular o fatorial: ");
	scanf("%i",& num);
	
	while(contador < num){
		
		fatorial = fatorial * (num - contador);
		
		contador++;
	}
	
	printf("\n%i! = %i", num, fatorial);
	
	return 0;
}
