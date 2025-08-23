#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,n3,maior,menor,med;
	char resp;
	do{
		printf("\n\t Informe tres numeros inteiros\n");
		scanf("%d",&n1);
		scanf("%d",&n2);
		scanf("%d",&n3);
		if((n1>n2) && (n1>n3)){
			maior=n1;
		
			if(n2>n3){
				med=n2;
				menor=n3;
			}
			else{
				med=n3;
				menor=n2;
			}
		printf("\n\t Ordem crescente: %d,%d,%d",menor,med,maior);
		printf("\n\t Ordem decrescente: %d,%d,%d",maior,med,menor);
		}
		else
			if((n2>n1) && (n2>n3)){
				maior=n2;
		
			if(n1>n3){
				med=n1;
				menor=n3;
			}
			else{
				med=n3;
				menor=n1;
			}
		printf("\n\t Ordem crescente: %d,%d,%d",menor,med,maior);
		printf("\n\t Ordem decrescente: %d,%d,%d",maior,med,menor);
		}
		else{
			maior=n3;
			if(n2>n1){
				med=n2;
				menor=n1;
			}
			else{
				med=n1;
				menor=n2;
			}
		printf("\n\t Ordem crescente: %d,%d,%d",menor,med,maior);
		printf("\n\t Ordem decrescente: %d,%d,%d",maior,med,menor);
		}
	printf("\n\t para continuar digite [s] se quiser finalizar qualquer outra letra.");
	scanf("%s",&resp);
	system("cls");
	}while(resp=='s' or resp=='S');
}
