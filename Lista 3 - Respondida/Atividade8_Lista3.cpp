#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float preco, aumento;
	int i, id, numProdutos, contadorProduto = 1;
	
	printf("INFORME A QUANTIDADE DE TIPOS DE PRODUTOS NO ESTOQUE DA LOJA: ");
	scanf("%i",&numProdutos);
	for(i = 1; i <= numProdutos; i++){
		printf("\nInforme a identificação do %iº produto: ",contadorProduto++);
		scanf("%i",&id);
		printf("\nQual o preço do produto? ");
		scanf("%f",&preco);
		aumento = preco + (preco * 10/100);
		printf("\nO novo preço do produto (id = %i) é R$%.2f\n\n",id,aumento);
		system("pause");
	}

return 0;
}
