/*

    Programa criado com a solução do PDF sobre a Linguagem C descomplicada
    Prof. Camila Leite
    ETEC Ermelinda
    LP - Jogos Digitais

*/
//Inclusão das bibliotecas que trabalham com caracteres, números e operações matemáticas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função principal da classe
int main()
{
    //Indico a vari~´avel, seu tipo e o limite de dados
    float n;
    printf ("Informe um número: ");
    scanf ("%f", &n);
    
    /* Pensando no par ou impar */
    if (fmod(n, 2) == 0 || fmod(n, 2) < 1) {
        printf ("%2f eh par. O resto da divisao eh %2f", n, fmod(n, 2));
    } else {
        printf ("%2f eh impar. O resto da divisao eh %2f", n, fmod(n, 2));
    }

    return 0;
}