#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){
    int num;
setlocale(LC_ALL,"portuguese");
    printf("Digite um numero para verificar se é par ou não: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("O numero %d é par",num);
    }else{
        printf("O numero %d é impar",num);
    }

}
