#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x = 0, y = 0;
	int vet[4], par[4], impar[4];
		for (i = 0; i < 4; i++){
		printf("Digite um numero qualquer: \n");
		scanf("%d", &vet[i]);
			if (vet[i] % 2 == 0){
			par[x] = vet[i];
			x++;
			}
			else{
			impar[y] = vet[i];
			y++;
			}
		}
	printf("Numeros digitados: ");
	for (i = 0; i < 4; i++)
	printf("%d; ", vet[i]);
	printf("\n");
	
	printf("Numeros pares digitados: ");
	for (i = 0; i < x; i++)
	printf("%d; ", par[i]);
	printf("\n");
	
	printf("Numeros impares digitados: ");
	for (i = 0; i < y; i++)
	printf("%d; ", impar[i]);
}
