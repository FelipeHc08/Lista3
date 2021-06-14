#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, corOlhos, corCabelo;
	int idade = 0, populacao, contador = 1, maiorIdade = 0, dados = 0, i;
	float porcentagem;
	
	printf("Quantos habitantes estão aqui? ");
	scanf("%i",&populacao);
	for(i = 1; i<= populacao; i++){
		do{
		system("cls");
		printf("\nQual o sexo do(a) %iº habitante?(M/F) ",contador++);
		scanf("%s",&sexo);
		fflush(stdin);
		sexo = toupper (sexo);
		}while(sexo != 'M' && sexo != 'F');
		do{
			printf("\nQual a cor dos olhos deste(a) habitante?(Azuis/Verdes/Castanhos/Pretos) ");
			scanf("%s",&corOlhos);
			fflush(stdin);
			corOlhos = toupper (corOlhos);
			
		}while (corOlhos != 'A' && corOlhos != 'V' && corOlhos != 'C' && corOlhos != 'P');
		do{
			printf("\nQual a cor dos cabelos deste(a) habitante?(Loiros/Castanhos/Pretos) ");
			scanf("%s",&corCabelo);
			fflush(stdin);
			corCabelo = toupper(corCabelo);
			
			
		}while (corCabelo != 'L' && corCabelo != 'C' && corCabelo != 'P');
	
			printf("\nQual a idade do(a) habitante? ");
			scanf("%i",&idade);
		}if(idade == -1){
			printf("\n\n");
			system("pause");
		}
			
			
		if(sexo == 'F' && idade < 35 && idade > 18 && corOlhos == 'V' && corCabelo == 'L'){
		
		dados++;
		
		}
		
		porcentagem = dados/populacao* 100;
	
		printf("\nA PORCENTADEM DE MULHERES LOIRAS DE OLHOS VERDES E MAIORES DE IDADE É DE %.2f%%", porcentagem);
	
		return 0;
		
}

