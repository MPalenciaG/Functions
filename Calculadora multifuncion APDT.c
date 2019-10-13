//Calculadora con multiples funciones

#include<stdio.h> //bibliotecas
#include<conio.h>

void menu(); //declarar funciones
void suma();
void resta();
void mult();
void div();

int main(){ //funcion principal
    printf("\n\t*****Calculadora*****\n");
    printf("\nDigite la opcion deseada, presione 'enter' tras cada eleccion.");
    menu();
    printf("\nGracias por usar la calculadora.");
    getch();
}
void menu(){ //menu de opciones
    int opc;
    do{ //bucle de menu
        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3. Multiplicar");
        printf("\n4. Dividir");
        printf("\n5. Salir");
        printf("\nOPCION: ");
        scanf("%i",&opc);
        if(opc>=1&&opc<=5){ //condicionante de validez
            switch(opc){ //selector de opcion
                case 1:suma();break;
                case 2:resta();break;
                case 3:mult();break;
                case 4:div();break;
            }
        }else{
            printf("\n\tElija una opcion valida.\n\n"); //opcion invalida
            }
    }while (opc!=5); //condicion terminar bucle
}
void suma(){
    float n1,n2,suma=0;
    printf("\nDigite el sumando:\n ");
    scanf("%f",&n1);
    printf("\nDigite el sumador:\n ");
    scanf("%f",&n2);
    suma=n1+n2;
    printf("\nLa suma es: %.2f\n",suma);
}
void resta(){
    float n1,n2,resta=0;
    printf("\nDigite el minuendo:\n ");
    scanf("%f",&n1);
    printf("\nDigite el sustraendo:\n ");
    scanf("%f",&n2);
    resta=n1-n2;
    printf("La resta es %.2f\n",resta);
}
void mult(){
    float n1,n2,multi=0;
    printf("\nDigite el multiplicando:\n ");
    scanf("%f",&n1);
    printf("\nDigite el multiplicador:\n ");
    scanf("%f",&n2);
    multi=n1*n2;
    printf("La multiplicacion es %.2f\n",multi);
}
void div(){
    float n1,n2,div=0;
    printf("\nDigite el dividendo:\n ");
    scanf("%f",&n1);
    printf("\nDigite el divisor:\n ");
    scanf("%f",&n2);
    div=n1/n2;
    printf("El cociente es %.2f\n",div);
}
