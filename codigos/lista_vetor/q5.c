#include <stdio.h>

/*
 * Esta é a função main
 * que inicia o código
 */
int main() {
    int v1[51],
        v2[51],
        i_v2,
        i,
        j,
        qnt_divisores;
    
    for(i = 1; i <=50; i++) {
        v1[i] = i;
    }
    i_v2 = 0;
    for(i = 1; i <=50; i++) {
        qnt_divisores = 0;
        for(j = 1; j <= i; j++) {
            if(i%j == 0){
                qnt_divisores++;
            }
        }
        if(i > 1 && qnt_divisores == 2){
            v2[i_v2] = i;
            i_v2++;
        }
    }
    printf("Segue o vetor v1:\n");
    for(i = 1; i <=50; i++) {
        printf("%d ",v1[i]);
    }
    printf("\nSegue o vetor v2:\n");
    for(i = 0; i <i_v2; i++) {
        printf("%d ",v2[i]);
    }
    printf("\n");
}
