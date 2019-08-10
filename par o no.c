#include<stdio.h>
int comprobar();

int main(){
    int numero,x;
    printf("Digite un numero: ");
    scanf("%i",&numero);
    x=comprobar(numero);
    (x==0)?printf("El numero es par"):printf("El numero es impar");
    return 0;
}

int comprobar(int a){
    if(a%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
