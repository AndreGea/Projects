#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetA[5], vetB[5];
	int i, j, soma = 0, multi = 1;
		for (i = 0; i < 5; i++){
		printf("Digite 5 numeros inteiros, Vetor A: \n");
		printf("Valor %d de 5: ", i+1);
		scanf("%d", &vetA[i]);
		printf("\n");
	}
	
		for (j = 0; j < 5; j++){
		printf("Digite 5 numeros inteiros, Vetor B: \n");
		printf("Valor %d de 5: ", j+1);
		scanf("%d", &vetB[j]);
		printf("\n");
	}
	
	printf("Vetor A: \n");
	for (i = 0; i < 5; i++)
	printf("%d; ", vetA[i]);
	printf("\n");
	
	printf("Vetor B: \n");
	for (j = 0; j < 5; j++)
	printf("%d; ", vetB[j]);
	printf("\n");
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if (i == j){
			multi = vetA[i] * vetB[j];
			soma += multi;
			printf("Multiplicacao: %d * %d = %d", vetA[i], vetB[j], multi);
			}	
		}
	printf("\n");
	}
	printf("Resultado total: %d", soma);
}
