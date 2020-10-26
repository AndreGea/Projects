#include <stdio.h>
#include <stdlib.h>

int main(){
	int matA[5][5], matB[5][5];
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matA[i][j]);
			if(i == j){
				matB[i][j] = 3 * matA[i][j];
			}
			else{
				matB[i][j] = 2 * matA[i][j];
			}
		}
	}
	
	printf("Matriz formada: \n");
	for (i = 0; i < 5; i++){
	for (j = 0; j < 5; j++){
	printf("[%d][%d] = %d\t", i, j, matB[i][j]);
	}
	printf("\n");
	}
}
