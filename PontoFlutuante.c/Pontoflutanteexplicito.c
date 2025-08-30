#include <stdio.h>

int main(){

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // é explícitamente convertido para float

    printf("Quociente é: %.2f\n", quociente);


    return 0;
}