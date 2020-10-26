#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetA[10], vetB[10];
	int i;
		for (i = 0; i < 10; i++){
		printf("Digite 10 numeros inteiros: \n");
		printf("Valor %d de 10: ", i+1);
		scanf("%d", &vetA[i]);
	}
	
	printf("Vetor ordem digitada: \n");
	for (i = 0; i < 10; i++)
	printf("%d; ", vetA[i]);
	printf("\n");
	

	printf("Vetor ordem contraria: \n");
		for (i = 9; i >= 0; i--){
		vetB[i] = vetA[i];
	printf("%d; ", vetB[i]);
}
}
