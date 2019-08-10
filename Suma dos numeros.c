//Suma con funciones

#include<stdio.h>
//prototipo
int sumar();

int main(){
    int a,b,suma=0;
    printf("Digite dos numeros:\n");
    scanf("%i %i",&a,&b);
    printf("La suma es: %i",sumar(a,b));
    return 0;
}
int sumar(int n1,int n2){
    int suma=0;
    suma=n1+n2;
    return suma;
}
