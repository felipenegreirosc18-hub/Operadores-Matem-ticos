#include <stdio.h>

int main(){

    int a = 7;
    float b = 2.5;
    float resultado = a + b; //implicitamente, "a" é convertido para float

    printf("Resultado: %.2f\n", resultado);


    return 0;
}