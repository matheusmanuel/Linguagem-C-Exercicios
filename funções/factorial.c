
#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1,resultado;
	printf("Digite um numero: ");
	scanf("%d",&num1);	
	resultado = factor(num1);
}
int factor(int factorial){
	int resultado = 1;
	for(;factorial>1;factorial--){
		resultado = resultado*factorial;
	}
	printf("Resultado Factorizado: %d",resultado);
	
}
