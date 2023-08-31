#include <stdio.h>

float calculo(float slaraio, float habitantes){
    return slaraio/habitantes;
};

int main(){
    int i=0, h=0;
    float sal=0, filh=0, hab=0;
    float m;

    while(i<1){
        printf("Digite o salario: ");
        scanf("%f",&sal);
        if(sal<=0){
            printf("Finalizado!");
            i++;
        }else{
            printf("Digite o numero de filhos: ");
            scanf("%f",&filh);
            hab++;
            hab+=filh;
            sal+=sal;
        }
    }
    m=calculo(sal,hab);
    printf("\nA media salarial da cidade eh: %.2f ",m);
    return 0;


}