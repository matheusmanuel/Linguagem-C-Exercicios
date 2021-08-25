#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
    int factorial,ResultadoFactorial=1,x;
    printf("Digite um numero: ");
    scanf("%d",&factorial);
    x  = factorial;
    for(;factorial>1;factorial--){
     ResultadoFactorial = ResultadoFactorial * factorial;
    }
    printf("O Factorial de %d é %d",x,ResultadoFactorial);
}

