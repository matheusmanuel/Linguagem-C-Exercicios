#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
    int num,contador,primo;
    
	printf("Digite um numero para ver se o numero � primo ou n�o: ");
    scanf("%d",&num);
    for(contador = 0;contador<=num;contador++){
        if(num%contador==0){
         primo++;
        }
    }
    
    if(primo==2){
        printf("%d � primo",primo);
    }else{
        printf("%d n�o � primo",primo);
    }
    
}
