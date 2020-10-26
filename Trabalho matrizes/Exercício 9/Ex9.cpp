#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetA[15], vetB[15], mat[15][2];
	int i, j;
	
	for (i = 0; i < 15; i++){
		printf("Digite 15 numeros para preencher o primeiro vetor: \n");
		printf("Valor %d de 15: \n", i+1);
		scanf("%d", &vetA[i]);
	}
	
	for (i = 0; i < 15; i++){
		printf("Digite 15 numeros para preencher o segundo vetor: \n");
		printf("Valor %d de 15: \n", i+1);
		scanf("%d", &vetB[i]);
	}
	
	printf("Vetor A: \n");
	for (i = 0; i < 15; i++)
	printf("%d; ", vetA[i]);
	printf("\n");
	
	printf("Vetor B: \n");
	for (i = 0; i < 15; i++)
	printf("%d; ", vetB[i]);
	printf("\n");
	
	printf("Matriz formada a partir dos dois vetores: \n");
	for (i = 0; i < 15; i++){
		for (j = 0; j < 2; j++){
			printf("[%d][%d] = %d \t", i, j, vetA[i]);
			printf("[%d][%d] = %d \t", i, j, vetB[i]);
			printf("\n");
		}
	}
	printf("\n");
}
