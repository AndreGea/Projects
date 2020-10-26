#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[4][4];
	int i, j;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (i == j || j >= i){
				printf("[%d][%d] = x\t", i, j);
			}
			else{
				printf("[%d][%d] = 0\t", i, j);
			}
		}		
	printf("\n");
	}
}
