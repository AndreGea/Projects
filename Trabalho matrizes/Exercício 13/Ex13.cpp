#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[7][7] ={{0, 2, 11, 6, 15, 11, 1},{2, 0, 7, 12, 4, 2, 15},{11, 7, 0, 11, 8, 3, 13},{6, 12, 11, 0, 10, 2, 1},{15, 4, 8, 10, 0, 5, 13},{11, 2, 3, 2, 5, 0, 14}, {1, 15, 13, 1, 13, 14, 0}}; 
	int i, j, origem, destino, destinoB, soma = 0, tempo;
	
	printf("Digite uma cidade de origem: \n");
	scanf("%d", &origem);
	printf("Digite uma cidade de destino: \n");
	scanf("%d", &destino);
	printf("Digite o tempo entre a cidade %d e %d: ", origem, destino);
	scanf("%d", &tempo);
	soma += tempo;
	printf("\n");
	if (origem > 7 || destino > 7){
		printf("Cidades invalidas!!! Tente novamente");
	}
	else{

	for (i = 0; i < 6; i++){
		for(j = 1; j < 7; j++){
			if(j > i){
				printf("%d\t", mat[i][j]);
			}
			else{
				printf(" \t");
			}
		}
	printf("\n\n");
	}
	
		while (destinoB != 7){
			printf("Digite uma cidade de destino: \n");
			scanf("%d", &destinoB);
				if (destinoB > 7){
					printf("Destino invalido!!! Tente novamente");
					printf("\n");
				}
				else{
				if (destinoB == 7){
					continue;
				}
			printf("Digite o tempo entre a cidade %d e %d: ", destino, destinoB);
			scanf("%d", &tempo);
			printf("\n");
			soma += tempo;
		}
		}
	printf("Tempo total de trajeto: %d\n", soma);
}
}
