#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Declarando Variaveis
	int numerodemacascompradas;
	float precodasmacas,valortotal;
	setlocale(LC_ALL,"");
	
	//Central de Comando
	printf("Quantas ma��s voc� deseja? ");
	scanf("%i",&numerodemacascompradas);
	system("cls || clear");
	
	//Valores Condicionais
	if(numerodemacascompradas<=12){
	
	precodasmacas=1.30;
	
}else{
	precodasmacas=1.20;
}
//Operadores aritmeticos
valortotal=precodasmacas * numerodemacascompradas;

printf("Numero de ma��s compradas: %i \n",numerodemacascompradas);
printf("Valor Total: %.1f. \n",valortotal);

}

