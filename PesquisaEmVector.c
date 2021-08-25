//Leia um vetor contendo 10 numeros, que correspondem a matrculas de alunos. Ler 3 matrculas 
//e imprima uma mensagem informando se eles esto ou no presentes no vetor.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int Nota[10],contador,conta,verifica=0; 	

for(contador = 0;contador<10;contador++){
   printf("Matriculas %d: ",contador);
   scanf("%d",&Nota[contador]);
}
while(conta<4){
	printf("\nPesquisa %d: ",conta);
    scanf("%d",&verifica);

	for(contador = 0;contador<10;contador++){
	if(Nota[contador]==verifica){
	printf("\7O Numero %d Existe na matricula");

	}
}
conta++;
}
}
