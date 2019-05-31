#include <stdio.h>

/*
 * Esta é a função main
 * que inicia o código
 */
int main() {
    int numeros[100],
        maior,
        menor,
        i;
    
    for(i = 0; i < 100; i++){
        scanf("%d",&(numeros[i]));
    }
    maior = numeros[0];
    menor = numeros[0];
    for(i = 0; i < 100; i++){
        if(numeros[i] > maior)
            maior = numeros[i];
        
        if( numeros[i] < menor)
            menor = numeros[i];
    }
    printf("%d %d\n",maior,menor);
    printf("A amplitude é %d\n",maior-menor);
}
