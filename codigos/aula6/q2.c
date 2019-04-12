#include <stdio.h>

int main() {
    float salario;
    float salario_reajustado;
    
    printf("Por favor, digite o salário do funcionário:");
    scanf("%f", &salario);
    
    if(salario < 0){
        printf("Não existe salário negativo\n");
    } else {
        if (salario <=1000.0){
            salario_reajustado =salario*1.12;
        }
        if(salario > 1000.0 && salario <= 2000.0) {
            salario_reajustado =salario*1.1;
        }
        if(salario > 2000.0) {
            salario_reajustado =salario*1.08;
        }
        
        printf("O salário reajustado é %f\n",salario_reajustado);
    }
}
