#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetA[4], vetB[4];
	int i;
	int maior = 0, menor;
	float media = 0, soma = 0;
		for (i = 0; i < 4; i++){
		printf("Digite 30 numeros inteiros quaisquer: \n");
		scanf("%d", &vetA[i]);
	}
	
	for (i = 0; i < 4; i++){
		vetB[i] = vetA[i];
		soma += vetA[i];
			if(vetB[i] > maior){
				maior = vetB[i];
			}
			if (i == 0){
            	menor = vetB[0];
			}
			if (vetA[i] < menor){
	        	menor = vetB[i];
			}
	}
	
	media = soma / 4;
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Soma dos valores digitados: %.0f\n", soma);
	printf("Media dos valores digitados: %.2f", media);
}
