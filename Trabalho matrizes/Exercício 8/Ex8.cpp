#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[7][4], vet[7];
	int i, j, maior = 0, menor;
	for (i = 0; i < 7; i++){
		for (j = 0; j < 4; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i = 0; i < 7; i++){
		for(j = 0; j < 4; j++){
			if(j == 0){
				menor = mat[i][j];
			}
			if(mat[i][j] > maior){
				maior = mat[i][j];
			}
			if(mat[i][j] < menor){
				menor = mat[i][j];
			}
		}
	vet[i] = menor;
	}
	
	printf("Matriz formada: \n");
		for (i = 0; i < 7; i++){
			for (j = 0; j < 4; j++){
			printf("[%d][%d] = %d\t", i, j, mat[i][j]);
			}
			printf("\n");
		}
		
	printf("Vetor formado: \n");
	for (i = 0; i < 7; i++){
		printf("%d; ", vet[i]);
	}
}

