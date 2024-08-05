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
    // declarando as variaveis x, y e z - todas do tipo int (numero inteiro)
    int x, y, z;

    //Buscar as informações e armazenar nas variáveis
    printf ("Informe um número: ");
    scanf ("%d", &x);
    
    printf("Informe mais um número: ");
    scanf ("%d", &y);
    
    printf("Informe um terceiro número: ");
    scanf("%d", &z);
    
    // vamos as soluções de cada atividade
    if (x >= y) {
        if(x == y) {
            printf ("%d eh igual a %d\n", x, y);    
        } else { 
            printf ("%d eh maior que %d\n", x, y);
        }
    } else {
        printf ("%d eh menor que %d\n", x, y);
    }
    
    if (x > y+2) {
        printf("%d eh maior que %d+2\n", x, y);
    } else if (x == y+2) {
        printf ("%d eh igual a %d+2\n", x, y);
    }
    else {
        printf("%d eh menor que %d+2\n", x, y);
    }
    
    if (x+5 != y+3) {
        printf ("Sim, %d+5 eh diferente de %d+3\n", x, y);
    } else {
        printf ("Não, %d+5 eh igual a %d+3\n", x, y);
    }
    
    if(x > y && x < z){
        printf("%d eh maior que %d, porem eh menor que %d", x, y, z);
    }

    return 0;
}