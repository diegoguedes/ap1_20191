#include <stdio.h>

int main() {
    float resultado,
        base;
    int expoente,
        i;
    
    scanf("%f %d",&base,&expoente);
    
    resultado = 1;
    for(i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    printf("O resultado é %f\n",resultado);
    
}
