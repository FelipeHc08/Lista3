#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota, mediaM, mediaF;
	char nome[50], sexo;
	int notaM, notaF, numeroM, numeroF, numAlunos, contador = 1;

	printf("Para calcular a média dos alunos, dê as seguintes informações:");
	printf("\nQuantos alunos há na classe? ");
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
	printf("\nA média de nota dos meninos da classe é de %.2f\nA média de nota das meninas da classe é de %.2f",mediaM, mediaF);


	return 0;
}
