#include <stdio.h>
#include <stdlib.h>

int main(){
	 int i; 
	 int num[10];
	 for(i = 0; i < 10;i++){
		 printf("Digite um numero qualquer\n");
		 scanf("%d",&num[i]);
		 }
	 printf("Ordem original\n");
		 for(i = 0; i < 10;i++)
		 printf("%d ",num[i]);
	 printf("\nOrdem inversa\n");
		 for(i = 9; i>=0; i--)
		 printf("%d ",num[i]);
}
