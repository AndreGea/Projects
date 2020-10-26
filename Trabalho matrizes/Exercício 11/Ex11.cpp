#include <stdio.h>
#include <stdlib.h>

int main (){
	int mat[3][4];
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("Matriz formada: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("[%d][%d] = %d\t", i, j, mat[i][j]);
		}
	printf("\n");
	}

	printf("Matriz transposta: \n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("[%d][%d] = %d\t", i, j, mat[j][i]);
		}
	printf("\n");
	}
}
