#include <stdio.h>
#include <stdlib.h>

int main (){
	int matA[5][3], matB[5][3];
	int i, j, aux;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("Digite os dados da matriz A, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matA[i][j]);
		}
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("Digite os dados da matriz B, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matB[i][j]);
		}
	}
	
	printf("Matriz A Original: \n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("[%d][%d] = %d\t", i, j, matA[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	
	printf("Matriz B Original: \n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("[%d][%d] = %d\t", i, j, matB[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	
	aux = matA[i][j];
	matA[i][j] = matB[i][j];
	matB[i][j] = aux;
	
	printf("Matriz A Trocada: \n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("[%d][%d] = %d\t", i, j, matB[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	
	printf("Matriz B Trocada: \n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("[%d][%d] = %d\t", i, j, matA[i][j]);
		}
	printf("\n");
	}
}
