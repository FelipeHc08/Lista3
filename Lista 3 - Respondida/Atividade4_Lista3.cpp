#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int n, contador;
	float h;
	
	printf("Sendo H=1/1+1/2+1/3+ ... +1/N, informe o valor de N para H ser calculado: ");
	scanf("%d", &n);

	for(contador = 1; contador <= n; contador++) {
		h += 1.0/contador;
}

	
	printf("\nPara N= %d --> H = %.2f", n, h);
	
	return 0;
}
