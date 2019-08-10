#include<stdio.h>
void media(float a,float b);

int main(){
    float n1,n2;
    printf("Digite dos numeros: ");
    scanf("%i %i",&n1,&n2);
    media(n1,n2);
    return 0;
}

void media(float a,float b){
    float x;
    x=((a+b)/2);
    printf("La media es: %.2f",x);
}
