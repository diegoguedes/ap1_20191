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
        AMB[MAX], // A-B
        i,
        j,
        ind_aub,
        ind_amb,
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
    // AUB = A U B
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
    // AMB = A - B
    for(i = 0,ind_amb = 0; i < MAX; i++) {
        // verificando se o elemento i de A pertence a B
        tem_igual = 0;
        for(j = 0; j < MAX; j++){
            if(A[i] == B[j]) {
                tem_igual = 1;
                break;
            }
        }
        if(tem_igual == 0) {
            AMB[ind_amb] = A[i];
            ind_amb++;
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
    printf("Segue o vetor AMB:\n");
    for(i = 0; i <ind_amb; i++) {
        printf("%d ",AMB[i]);
    }
    printf("\n");
}
