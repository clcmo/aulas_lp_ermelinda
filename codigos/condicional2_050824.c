/*

    Programa criado com a solução do PDF sobre a Linguagem C descomplicada
    Prof. Camila Leite
    ETEC Ermelinda
    LP - Jogos Digitais

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf ("Informe um número: ");
    scanf ("%d", &n);
    
    /* Pensando no par ou impar */
    if (n % 2 == 0) {
        printf ("%d eh par", n);
    } else {
        printf ("%d eh impar", n);
    }

    return 0;
}