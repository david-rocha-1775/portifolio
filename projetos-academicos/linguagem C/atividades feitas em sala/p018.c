#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,v1[10],v2[10],v3[10],soma=0;
    for(i=0; i<5; i++){
        printf("\ndigite o valor %d: ", i+1);
        scanf("%d", &v1[i]);
        printf("\ndigite o valor %d: ", i+1);
        scanf("%d", &v2[i]);
        v3[i]=v1[i]+v2[i];
        soma+=v3[i];
    }
    for(i=1; i<5; i++){
        printf("\n%d + %d = %d", v1[i], v2[i], v3[i]);
    }
    return 0;
}