#include <stdio.h>
#include <stdlib.h>

int main(){
	int matA[5][2];
	int i, j, par;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matA[i][j]);
			if (matA[i][j] % 2 == 0){
				par++;
			}
		}
	}
	
	printf("Matriz formada: \n");
	for (i = 0; i < 5; i++){
	for (j = 0; j < 2; j++){
	printf("[%d][%d] = %d\t", i, j, matA[i][j]);
	}
	printf("\n");
	}
	printf("Quantidade de elementos pares: %d \n", par);	
}
