#include <stdio.h>
#include <stdlib.h>

int main(){
	int matA[10][8];
	int i, j, maior, menor;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 8; j++){
			printf("Digite os dados da matriz, linha %d coluna %d: \n", i+1, j+1);
			scanf("%d", &matA[i][j]);
           if (i == 0 && j == 0){
               maior = matA[0][0];
               menor = matA[0][0];
           }
           if (matA[i][j] > maior){
            maior = matA[i][j];
           }
           if (matA[i][j] < menor){
           	menor = matA[i][j];
		   }
		}	
	}
	
	printf("Matriz formada: \n");
	for (i = 0; i < 10; i++){
	for (j = 0; j < 8; j++){
	printf("[%d][%d] = %d\t", i, j, matA[i][j]);
	}
	printf("\n");
	}
	printf("Maior: %d \n", maior);
	printf("Menor: %d \n", menor);
}
