#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[1000];
	int i, soma = 0;
	for(i = 0; i < 1000; i++){
		printf("Digite 1000 numeros: \n");
		scanf("%d", &vet[i]);
		if(i % 2 == 0 and vet[i] >= 0)
		soma += vet[i];
	}
	printf("Soma dos valores nas posicoes pares: ");
	printf("%d", soma);
}
