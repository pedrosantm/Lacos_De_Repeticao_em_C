#include <stdio.h>
#include <stdlib.h>

void claculo(int n1, int n2, int n3){
    int aux;
    if(n1 < n3){
        aux = n1;
        n1 = n3;
        n3 = aux;
    }if(n1 < n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }if(n2 < n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    printf("Os numeros em ordem: %d %d %d" ,n1, n2, n3);
}

int main(){
    int n, i=0;
    int n1, n2, n3;

    printf("Digite a quantidade de conjuntos que serao lidos: ");
    scanf("%d",&n);
    for(i; i<n; i++){
        printf("Digite os tres numeros: ");
        scanf("%d %d %d",&n1, &n2, &n3);
        calculo(n1,n2,n3);
    }
    return 0;
}
