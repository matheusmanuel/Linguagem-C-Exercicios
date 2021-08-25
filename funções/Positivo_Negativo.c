#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese"); 
	int num1,result;
	printf("Digite um numero: ");
	scanf("%d",&num1);
    result=verifica(num1);
    if(result==1){
    	printf(" %d é positivo",num1);
	}else{
		printf(" %d é negativo",num1);
	}
	
	return 0;
}
int verifica(int a){
	if(a>1){
		return 1;
	}
	else{
		return 0;
	}
}
