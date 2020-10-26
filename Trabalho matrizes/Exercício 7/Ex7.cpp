#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, result;
	int mat[i][j];

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor para %d de %d: \n", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	result = 1;	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (i == j){
				if (mat[i][j] != 1)
				result = 0;
				break;
			}else{
				if (mat[i][j] != 0)
				result = 0;
				break;
			}
		}
		if(!result)
		break;
	}
	
	if (result)
		printf("Eh identidade");
	else 
		printf("Nao eh identidade");
}
