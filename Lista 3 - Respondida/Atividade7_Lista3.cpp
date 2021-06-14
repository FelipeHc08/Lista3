#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int fruta, maca=0, abacaxi=0, pera=0;
	
	do{
	printf("1--ABACAXI\n2--MAÇÃ\n3--PERA\n4--FINALIZAR");
	printf("\n\nInforme as frutas desejadas: ");
	scanf("%i",&fruta);
	
	if(fruta==1){
		abacaxi++;
	}else if(fruta == 2){
		maca++;
	}else if(fruta == 3){
		pera++;
	}
	printf("\n\nFRUTAS COMPRADAS:\n\nABACAXI:%i\nMAÇÃ:%i\nPERA:%i\n\n",abacaxi,maca,pera);
	
	}while (fruta != 4);
	
	return 0;

}

