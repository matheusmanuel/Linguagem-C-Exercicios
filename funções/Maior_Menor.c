#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<locale.h>
int main(){
   setlocale(LC_ALL,"portuguese");
   int num1,num2,resu;
   printf("Digite o primeiro numero: ");
   scanf("%d",&num1);
   printf("Digite o segundo numero: ");
   scanf("%d",&num2);
   resu=compara(num1,num2);
   printf ("O maior Numero é: %d",resu);
   
}

int compara(int numero1, int numero2){
	if(numero1>numero2){
		return numero1;
	}else{
		return numero2;
	}
}
