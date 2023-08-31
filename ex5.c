#include <stdio.h>
#include <stdlib.h>

void conceito(float nota){
    if(nota<=39){
        printf("Conceito: F");
    }else if(nota>=40<59){
        printf("Conceito: E");
    }else if(nota>=60<69){
        printf("Conceito: D");
    }else if(nota>=70<79){
        printf("Conceito: C");
    }else if(nota>=80<89){
        printf("Conceito: B");
    }else if(nota>90){
        printf("Conceito: A");
    }
}

int main(){
    float nota;
    int i=0,alunos;

    printf("Digite o numero de alunos: ");
    scanf("%d",&alunos);

    for(i<alunos;i++){
        printf("Digite a nota: ");
        scanf("%f",&nota);
        conceito(nota);
    }
    return 0;
}
