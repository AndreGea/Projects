#include <stdio.h>
#include <stdlib.h>

int main(){
	float notas[4];
	float media = 0;
	int i;
	for (i = 0; i < 4; i++){
		printf("Digite suas notas:\n");
		scanf("%f", &notas[i]);
		media += notas[i];
	}
	media /= 4;
	printf("Media das suas notas: %.2f\n", media);
}
