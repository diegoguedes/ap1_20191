#include <stdio.h>

/*
 * Esta é a função main
 * que inicia o código
 */
int main() {
    
    int iteracao = 0;
    int qnt_iteracoes;
    float x,y;
    float soma_x = 0, soma_y= 0;
    
    scanf("%d",&qnt_iteracoes);
    
    do {
        scanf("%f  %f",&x,&y);
        soma_x += x;
        soma_y += y;
        
        iteracao++; //iteracao = iteracao+1;
    } while (iteracao<qnt_iteracoes);
    
    printf("A média é (%.2f,%.2f)\n",soma_x/qnt_iteracoes, soma_y/qnt_iteracoes);
    
}
