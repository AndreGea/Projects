#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[5];
	int i, media = 0;
	for (i = 0; i < 5; i++){
		printf("Digite um numero qualquer\n");
		scanf("%d", &num[i]);
	}
	 for(i = 0; i < 5; i++)
	 printf("Numeros digitados: %d\n",num[i]);
}
