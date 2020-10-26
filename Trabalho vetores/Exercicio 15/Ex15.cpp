#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, atl;
	char nome[144];
	float media, soma = 0, saltos[5], saltosVal[j];
	float maior = saltos[0], menor;
	printf("Digite o numero de atletas que participaram da competicao:\n");
	scanf("%d", &atl);
	for (i = 0; i < atl; i++){
		printf("Digite o nome do atleta: \n");
		scanf("%s", &nome);
		for (j = 0; j < 5; j++){
			printf("Digite a distancio do salto %d do atleta: \n", j + 1);
			scanf("%f", &saltos[j]);
			if (saltos[j] > maior){
				maior = saltos[j];
			}
			if (j == 0){
           		menor = saltos[0];
			}
			if (saltos[j] < menor){
	    	   	menor = saltos[j];
			}
		}
	printf("Saltos do atleta %s:\n", nome);
	for (j = 0; j < 5; j++){
			if (saltos[j] == maior){
			printf("Salto %d de 5: %.2f metros - DESCONSIDERADO\n", j + 1, maior);	
			}
			else if (saltos[j] == menor){
				printf("Salto %d de 5: %.2f metros - DESCONSIDERADO\n", j + 1, menor);	
			}
			else{
				printf("Salto %d de 5: %.2f metros\n", j + 1, saltos[j]);
				soma += saltos[j];
				saltosVal[j] = saltos[j];
			}
		media = soma / 3;
	}
		printf("Resultado Final:\n");
		printf("Atleta: %s\n", nome);
		printf("Saltos Considerados: ");
		for (j = 0; j < 5; j++){
			if(saltos[j] != maior && saltos[j] != menor){
				printf("%.2f; ", saltosVal[j]);
			}
		}
		printf("\n");
		printf("Soma: %.2f\n", soma);
		printf("Media dos saltos: %.2f\n", media);
		soma = 0;
}
}
