#include <stdio.h>
#include <stdlib.h>

float media;
void calculo(int *alunos, float *nota){
    if(*nota<=6){
        media=*nota/ *alunos;
        printf("A media eh %f",media);
    }
}

int main(){
    int alunos=0,max, i=0;
    float nota;

    printf("quantas notas de alunos serao aclculados? ");
    scanf("%d",&max);
    for(i;i<max;i++){
        printf("Digite a nota: ");
        scanf("%f",&nota);
        alunos+=1;
        calculo(&alunos, &nota);

    }
    return 0;
}