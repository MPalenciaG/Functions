/* calculadora con multilples funciones */
#include<stdio.h>
void menu();
void suma();
void resta();
void mult();
void div();

int main(){

    menu();

    return 0;
}
void menu(){
    int opc;
    do{
        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3. Multiplicar");
        printf("\n4. Dividir");
        printf("\n5. Salir");
        printf("\nOPCION: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:suma();break;
            case 2:resta();break;
            case 3:mult();break;
            case 4:div();break;
        }
    }while (opc!=5);
}
void suma(){
    float n1,n2,suma=0;
    printf("\nDigite dos numeros: ");
    scanf("%f %f",&n1,&n2);
    suma=n1+n2;
    printf("\nLa suma es: %.2f\n",suma);
}
void resta(){
    float n1,n2,resta=0;
    printf("\nDigite dos numeros: ");
    scanf("%f %f",&n1,&n2);
    resta=n1-n2;
    printf("La resta es %.2f\n",resta);
}
void mult(){
    float n1,n2,multi=0;
    printf("\nDigite dos numeros: ");
    scanf("%f %f",&n1,&n2);
    multi=n1*n2;
    printf("La multiplicacion es %.2f\n",multi);
}
void div(){
    float n1,n2,div=0;
    printf("\nDigite dos numeros: ");
    scanf("%f %f",&n1,&n2);
    div=n1/n2;
    printf("La division es %.2f\n",div);
}
