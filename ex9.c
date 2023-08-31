#include <stdio.h>
#include <stdlib.h>

int result(float num){
    if(num>0){
        return 1;
    }else{
        return 2;
    }
}

int main(){
    float numero,r;
    int i, max;
    printf("Digite quantos numeros seraom lidos: ");
    scanf("%d",&max);

    for(i=0;i<max;i++){
        printf("Digite o numero: ");
        scanf("%f",&numero);
        r=result(numero);
        if(r==1){
            printf("Numero negativo");
        }else{
            printf("Numero positivo");
        }
    }

    return 0;
}