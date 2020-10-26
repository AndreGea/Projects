#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, tamanhoB = 0;
	int vet[10], vetB[i - tamanhoB];
	int n = vet[0];
	
	for (i = 0; i < 10; i++){
		printf("Digite 30 numeros inteiros, Vetor A: \n");
		printf("Valor %d de 30: ", i+1);
		scanf("%d", &vet[i]);
		printf("\n");
	}
	
	printf("Vetor Formado: ");
	for (i = 0; i < 10; i++){
		if (n < vet[i]){
			tamanhoB++;
			vetB[i - tamanhoB] = vet[i];
			printf("%d; ", vetB[i - tamanhoB]);
		}
	n = vet[i];
	}
}
