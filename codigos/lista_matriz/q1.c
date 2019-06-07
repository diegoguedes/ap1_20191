#include <stdio.h>

/*
 * Esta é a função main
 * que inicia o código
 */
int main() {
    // solução B
    int ordem = 3;
    int mat[ordem+1][ordem+1],
        i,
        j,
        soma_diag_princ,
        soma_diag_sec;
    
    soma_diag_princ = 0;
    soma_diag_sec = 0;
    for(i = 1; i <=ordem; i++) {
        for (j=1; j<= ordem; j++) {
            scanf("%d",&(mat[i][j]));
        }
    }
    for(i = 1; i <= ordem; i++) {
        for (j = 1; j<= ordem; j++) {
            // diag. princ
            if(i == j){
                soma_diag_princ += mat[i][j];
            }
            if(i+j == ordem+1) { // diag. sec
                soma_diag_sec += mat[i][j];
            }
        }
    }
    if(soma_diag_princ == soma_diag_sec)
        printf("As somas são iguais\n");
    else
        printf("As somas são diferentes\n");
}
