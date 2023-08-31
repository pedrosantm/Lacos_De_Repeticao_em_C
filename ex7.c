#include <stdio.h>
#include <stdlib.h>

float result;
float calculo(float x){
    for(int i = 0; i <x; i++){
        result += 1/i;
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
