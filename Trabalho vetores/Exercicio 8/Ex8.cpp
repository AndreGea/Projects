#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[4], n, cont;
	int i;
	for (i = 0; i < 4; i++){
		printf("Digite 50 numeros: \n");
		scanf("%d", &vet[i]);
	}
	printf("Digite um numero qualquer: \n");
	scanf("%d", &n);
	for (i = 0; i < 20; i++)
	if(n == vet[i])
	cont++;
	printf("O numero %d apareceu %d vezes no vetor!!", n, cont);
}
