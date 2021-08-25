#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
    int num,contador,primo;
    
	printf("Digite um numero para ver se o numero é primo ou não: ");
    scanf("%d",&num);
    for(contador = 0;contador<=num;contador++){
        if(num%contador==0){
         primo++;
        }
    }
    
    if(primo==2){
        printf("%d é primo",primo);
    }else{
        printf("%d não é primo",primo);
    }
    
}
