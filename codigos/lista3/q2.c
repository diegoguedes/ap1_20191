#include <stdio.h>

int main() {
    long fatorial,
        i;
    float x,
        x1;
    double soma;
    
    scanf("%f",&x);
    fatorial = 1;
    soma = x;
     for(i = 1; i <=20; i++) {
         fatorial = i*fatorial;
         if(i%2 == 1){
             x1 = x*-1;
         } else{
             x1 = x;
         }
         soma+= x1/fatorial;
    }
    printf("O resultado é %f\n",soma);
}
