#include <stdio.h>
#include <string.h>




float calculo(float n1, float n2, float n3, char letra){
    if(letra=='A'){
        return (n1+n2+n3)/3;
    }else{
        return (n1*5)+(n2*3)+(n3*2)/3;

    }
}

int main(){
    float m;
    float n1, n2, n3;
    char letra[1];
    int i=0,n,k=1;

    printf("Digite o numero de alunos: ");
    scanf("%d",&n);
    for(i;i<n;i++){
        printf("Digite as notas do %d aluno\n ", k);
        printf("Primeira nota: ");
        scanf("%f",&n1);
        printf("Segunda nota: ");
        scanf("%f",&n1);
        printf("Terceira nota: ");
        scanf("%f",&n1);
        printf("Digite A para media simples, e P para media ponderada: ");
        setbuf(stdin, NULL);
        fgets(letra, 1, stdin);
        m=calculo(n1, n2, n3,letra);

        
        printf("A media do %d aluno eh: %f",k,m);
        k++;
    }
    return 0;

}