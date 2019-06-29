#include <stdio.h>

/*
 * Esta é a função main
 * que inicia o código
 */
#define MAX 10

int main() {
    int A[MAX],
        B[MAX],
        AUB[MAX*2],
        i,
        j,
        ind_aub,
        tem_igual;
    
    for(i = 0; i <MAX; i++) {
        scanf("%d",&(A[i]));
    }
    
    for(i = 0; i <MAX; i++) {
        scanf("%d",&(B[i]));
    }
    //copia de A para AUB
    for(i = 0; i <MAX; i++) {
        AUB[i] = A[i];
    }
    // percorrendo B
    for(i = 0,ind_aub = MAX; i < MAX; i++) {
        // verificando se o elemento i de B pertence a A
        tem_igual = 0;
        for(j = 0; j < MAX; j++){
            if(A[j] == B[i]) {
                tem_igual = 1;
                break;
            }
        }
        if(tem_igual == 0) {
            AUB[ind_aub] = B[i];
            ind_aub++;
        }
    }
    
    printf("Segue o vetor A:\n");
    for(i = 0; i <MAX; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Segue o vetor B:\n");
    for(i = 0; i <MAX; i++) {
        printf("%d ",B[i]);
    }
    printf("\n");
    printf("Segue o vetor AUB:\n");
    for(i = 0; i <ind_aub; i++) {
        printf("%d ",AUB[i]);
    }
    printf("\n");
}
