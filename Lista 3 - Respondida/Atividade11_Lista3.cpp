#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char finalista1[50], finalista2[50], finalista3[50];
	int juizes, i, soma1, somaJ1, soma2, somaJ2, soma3, somaJ3, contJuiz = 1;
	
	printf("Informe o nome do primeiro finalista: ");
	scanf("%s",&finalista1);
	printf("\nInforme o nome do segundo finalista: ");
	scanf("%s",&finalista2);
	printf("\nInforme o nome do terceiro finalista: ");
	scanf("%s",&finalista3);
	system("cls");
	printf("Quantos juízes estão presentes? ");
	scanf("%i",&juizes);
	system("cls");
	for(i=1; i <= juizes; i++){
		printf("Juiz nº%i, qual nota deseja atribuir ao finalista %s? ",contJuiz++,finalista1);
		scanf("%i",&somaJ1);
		printf("Juiz nº%i, qual nota deseja atribuir ao finalista %s? ",contJuiz,finalista2);
		scanf("%i",&somaJ2);
		printf("Juiz nº%i, qual nota deseja atribuir ao finalista %s? ",contJuiz,finalista3);
		scanf("%i",&somaJ3);
	}
		soma1+=soma1+somaJ1;
		soma2+=soma2+somaJ2;
		soma3+=soma3+somaJ3;		

	printf("NOTA1:%i\n", soma1);
	printf("NOTA2:%i\n", soma2);
	printf("NOTA3:%i\n", soma3);
	return 0;
}
