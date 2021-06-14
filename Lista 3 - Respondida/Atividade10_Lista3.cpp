#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, numero, numContados = 0;
	
	for(i > 1; i < 100; i++){
		printf("Informe um número: ");
		scanf("%i", &numero);
		numContados++;
		system("cls");
		if(numero < 0){
			printf("\nTOTAL DE NÚMEROS CONTADOS: %i\n\n",numContados);
			system("pause");
			return 0;
		}
	}
	printf("\nTOTAL DE NÚMEROS CONTADOS: %i\n\n",numContados);
	system("pause");
	return 0;	
}
