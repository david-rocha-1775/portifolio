#include <stdio.h>
#include <stdlib.h>

int main(){
	int matA[3][3],matB[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\nInforme o elemento a%d:%d da matriz A:", i+1,j+1);
			scanf("%d", &matA[i][j]);
			printf("\nInforme o elemento b%d:%d da matriz B:", i+1,j+1);
			scanf("%d", &matB[i][j]);
		} system("cls");
		for (i=0;i<3;i++){
			for (j=0;j<3;j++)
			printf("\t%d",matA[i][j]+matB[i][j]);
			printf("\n");
		}
			return 0;
}
