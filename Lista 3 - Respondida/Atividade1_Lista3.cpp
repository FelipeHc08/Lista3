#include<stdio.h>
#include<locale.h>

int main (){
	
	int num, contador, fat=1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o número para calcular o fatorial: ");
	scanf("%i", &num);

	if(num > 0){
		for (contador = num; contador > 0; contador--){
			fat *= contador;
		}
	}
	
	printf("%i! = %i", num, fat);
 
  return 0;
}
	
	

