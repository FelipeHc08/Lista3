#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota, mediaM, mediaF;
	char nome[50], sexo;
	int notaM, notaF, numeroM, numeroF, numAlunos, contador = 1;

	printf("Para calcular a m�dia dos alunos, d� as seguintes informa��es:");
	printf("\nQuantos alunos h� na classe? ");
	scanf("%i", &numAlunos);
	
	for (numAlunos > 0; numAlunos < contador; contador++){
	do{ 
	printf("\nQual a nota obtida pelo(a) aluno(a) %s? ",nome);
    scanf("%f",&nota);
    fflush(stdin);
    } while(nota < 0);
	
	 do {	
		printf("\nQual o sexo do(a) aluno(a) %s (M/F)? ", nome);
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper (sexo);
		}while((sexo != 'M') && (sexo != 'F'));
		system("cls");
	if (sexo == 'M'){
	numeroM = numeroM + 1;
	mediaM += nota;
	 
	}
	else if (sexo == 'F'){
	numeroF = numeroF + 1;
	mediaF += nota;
}

	}
	mediaM = notaM/numeroM;
	mediaF = notaF/numeroF;
	
	printf("========================================");
	printf("\nA m�dia de nota dos meninos da classe � de %.2f\nA m�dia de nota das meninas da classe � de %.2f",mediaM, mediaF);


	return 0;
}
