#include <stdio.h>
#include <stdlib.h>

int main(){
	int matA[5][2], matB[5][2];
	int i, j, soma = 0, multi = 1;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matA[i][j]);
		}
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2; j++){
			if (j == 0){
				matB[i][j] = matA[i][j];
				soma += matB[i][j];
			}
			if (j == 1) {
				matB[i][j] = matA[i][j];
				multi *= matB[i][j];
			}
		}
	}
	
	printf("Resultado Matriz: \n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2; j++){
			printf("[%d][%d] = %d \t", i, j, matA[i][j]);
		}
	printf("\n");
	}
	printf("Soma dos elementos da primeira coluna: %d\n", soma);
	printf("Multiplicacao dos elementos da segunda coluna: %d", multi);
}
