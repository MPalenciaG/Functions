//funcion

#include<stdio.h>

void saludo(); //Prototipo para hacerle saber a la funcion principal que la funcion secundaria existe fuera de ella.

int main(){
    saludo();
    return 0;
}
void saludo(){
    printf("Hola mundo!");
}
