#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){
    int num;
setlocale(LC_ALL,"portuguese");
    printf("Digite um numero para verificar se � par ou n�o: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("O numero %d � par",num);
    }else{
        printf("O numero %d � impar",num);
    }

}
