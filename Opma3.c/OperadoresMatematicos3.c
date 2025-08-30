    #include <stdio.h>

    int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--    
    */

        int numero1 = 2, resultado;

    printf("Antes Incremento: %d\n", numero1);
    
    resultado = numero1++;

    printf("Após Pós-Incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;   

    printf("Após Pré-Incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = numero1--;

    printf("Após Pós-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;   

    printf("Após Pré-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);


    //printf("Apos Incremento: %d\n", numero1);

    //numero1--;

    //printf("Apos Decremento: %d\n", numero1);

    return 0;
    }
