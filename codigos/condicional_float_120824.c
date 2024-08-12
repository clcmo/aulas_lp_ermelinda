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
    float n;
    printf ("Informe um número: ");
    scanf ("%f", &n);
    
    /* Pensando no par ou impar */
    if (fmod(n, 2) == 0) {
        printf ("%f eh par. O resto da divisao eh %f", n, fmod(n, 2));
    } else {
        printf ("%f eh impar. O resto da divisao eh %f", n, fmod(n, 2));
    }

    return 0;
}