#include<stdio.h>

int main(){
    int n1,n2;
    int opcion;
    printf("Escriba dos numeros:\n");
    scanf("%i %i",&n1,&n2);
    printf("Elija la opcion deseada:");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Division\n");
    scanf("%i",&opcion);
    switch(opcion){
        case 1: sum(n1,n2);
        break;
        case 2: rest(n1,n2);
        break;
        case 3: mult(n1,n2);
        break;
        case 4: div(n1,n2);
        break;
    }
    return 0;
}
void sum(int a, int b){
    float suma=(a+b);
    printf("La suma es %.2f",suma);
}
void rest(int a, int b){
    float resta=(a-b);
    printf("La resta es %.2f",resta);
}
void mult(int a, int b){
    float multi=(a*b);
    printf("La multiplicacion es %.2f",multi);
}
void div(int a, int b){
    float divi=(a/b);
    printf("La division es %.2f",divi);
}
