/*

    Programa criado com a solução do PDF sobre a Linguagem C descomplicada
    Prof. Camila Leite
    ETEC Ermelinda
    LP - Jogos Digitais

*/
#include <stdio.h>

int main()
{
    //Apresentando: a variável nome é do tipo char, possui um limite de 30 caracteres.
    // Logo, estamos tratando de dados alfabéticos, além dos numeros (como já visto no lab)
    char nome [30];
    printf("Digite um nome: ");
    
    //Captura o nome digitado no teclado
    fgets(nome, 30, stdin);
    
    //Informa na tela o nome digitado
    printf("O nome digitado foi %s", nome);

    return 0;
}