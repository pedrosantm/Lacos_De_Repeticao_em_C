#include <stdio.h>
#include <stdlib.h>

float result, dividendo=2,divisor=4;
float calculo(float x){
    for(int i = 0; i <x; i++){
        result += dividendo/divisor;
        dividendo*=(dividendo);
        divisor+=3;
    }
    return result;
}

int main(){
    float n, r;

    printf("Digite o numero limite para caculo: ");
    scanf("%f", &n);
    calculo(n);
    r=result;
    printf("O resultado foi %f", r);

    return 0;

}
