#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Embaralha(char fonte[30], char dest[30]){
	int i, tam, pos;
	int emb;
	srand(time(NULL));
	
	tam = strlen(fonte);
	
	//Diz que as posicoes do destino nao possuem valor ainda
	for (i = 0; i < tam; i++)
	dest[i] = '0';
	
	for (i = 0; i < tam; i++){
		do{
			pos = rand() % tam;
			if(dest[pos] == '0'){
			dest[pos] = fonte[i];
			emb = 1;
			}
			else
				emb = 0;
		} while(!emb);
	}
	dest[tam] = '\0';
}

int main(int argc, char *argv[]){
	char palavra[30], emb[30];//Embaralhar;
	printf("Digite uma palavra qualquer: \n");
	gets(palavra);
	fflush(stdin);
	
	Embaralha(palavra, emb);

	printf("Palavra normal: %s\nPalavra embaralhada: %s\n", palavra, emb);
	return 0;
}
