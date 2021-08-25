#include<stdio.h>
#include<stdlib.h>

int main(){
int num,resultado;
printf("Digite um numero: ");
scanf("%d",&num);

resultado=ParOuImpar(num);
// Se a função ParOuImpar retorna o numero 1 é par
    if(resultado==1){
        printf("%d é par",num);
    }
    else{
        printf("%d não é par",num);
   }
}

// Função que verifica se o numero(x) recebido como parametro é par ou não
int ParOuImpar(int x){
    if(x%2==0){
        // Se o numero x é divisivel por 2 a função retorna o numero 1
        return 1;
    }else{
        // Se o numero x não é divisivel por 2 a função retorna o numero 0
        return 0;
    }
}