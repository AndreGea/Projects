#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet1[20], vet2[20];
	int i;
	for (i = 0; i < 20; i++){
		printf("Digite um numero inteiro qualquer: \n");
		scanf("%d", &vet1[i]);
	}
	for (i = 0; i < 20; i++){
		vet2[i] = vet1[i] * 2;
	}
	
	printf("Numeros digitados: \n");
	for(i = 0; i < 20; i++)
	printf("%d; ", vet1[i]);
	printf("\n");
	
	printf("Numeros digitados com valores dobrados: \n");
	for(i = 0; i < 20; i++)
	printf("%d; ", vet2[i]);
}
