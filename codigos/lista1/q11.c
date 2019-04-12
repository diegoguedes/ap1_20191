#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;
    
    // impressão na tela
    printf("Digite o dividendo e divisor: ");
    // leitura das variáveis
    scanf("%d %d",&dividendo,&divisor);
    
    // cálculo do quociente e resto
    quociente = dividendo/divisor;
    resto = dividendo - quociente*divisor;
    
    //impressão do valores
    printf("Dividendo: %d \n",dividendo);
    printf("Divisor: %d \n",divisor);
    printf("Quociente: %d \n",quociente);
    printf("Resto: %d \n",resto);
    
}
