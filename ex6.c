#include <stdio.h>
#include <stdlib.h>

float e;
float calculo(float x){
    if(x<=0){
        printf("Nao eh possivel calcular");

    }else{
        int i=1, j=0;
        for(i;i<x;i++){
            for(j;j<i;j++){
                j*=j;
            }
            e+=1/j;
            j=0;
        }

    }
}
    

    int main(){
        float num, n;

        printf("Digite o numero do divisor fatorial");
        scanf("%f",&num);
        claculo(num);
        n=calculo;
        printf("O resultado eh %f ",n);

          return 0;
 }
