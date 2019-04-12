#include <stdio.h>

int main() {
    float salario_bruto;
    float valor_prestacao;
    float teto;
    
    printf("Digite o salário bruto e valor da prestação: ");
    scanf("%f %f", &salario_bruto,&valor_prestacao);
   
    if(salario_bruto > 0) {
        teto = salario_bruto*0.3;
        if(valor_prestacao <= teto){
            printf("Parabéns, o empréstimo pode ser concedido!\n");
        } else{
            printf("Ops, o empréstimo não pode ser concedido!\n");
        }
    } else{
        printf("Ops, salário bruto inválido!\n");
    }
    
}
