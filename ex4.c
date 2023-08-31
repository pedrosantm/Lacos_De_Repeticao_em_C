#include <stdio.h>
#include <stdlib.h>

void calculo(int x, int y, int z){
    if(x>y+z||y>z+y||y>z+x){
        printf("Nao eh possivel formar um triangulo!");
    }else if{
        if(x==y==z){
            printf("Triangulo equilatero");
       }else if(x!=y!=z){
            printf("Triangulo Escaleno");
       }else{
            printf("Triangulo Isosceles");
       }
    }
}

