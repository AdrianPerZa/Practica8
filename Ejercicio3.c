#include <stdio.h>
int main(){
    int i,a,filas =4;
    for (i=1;i<=filas;i++){
        for(a=1;a<=i;a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}