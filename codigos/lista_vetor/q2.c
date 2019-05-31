#include <stdio.h>
#include <math.h>
/*
 * Esta é a função main
 * que inicia o código
 */
int main() {
    int numeros[100],
        maior,
        menor,
        i,
        soma = 0;
    
    for(i = 0; i < 100; i++){
        scanf("%d",&(numeros[i]));
    }
    for(i = 0; i < 100; i++){
        soma = soma + numeros[i]*numeros[i];
    }
    printf("A amplitude é %f\n",sqrt(((double)soma)/100));
}
