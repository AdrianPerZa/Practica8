#include <stdio.h>
int main(){
int n;
printf("Ingrese un numero del 1 al 100:");
scanf("%d",&n);
while(n<1||n>100){
    printf("ERROR: Numero fuera de rango\n Reintente de nuevo:");
    scanf("%d",&n);
}
printf("El numero %d es valido\n",n);
}