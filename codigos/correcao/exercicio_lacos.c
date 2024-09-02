/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
 
int main() {

    int continua, contador;
    continua = 's';
    contador = 0;
    

    do  // enquanto for igual a 's'
    {
        // comandos a serem repetidos
    
        printf("Repetindo....\n");
    
        contador = contador + 1;

        printf("Tecle 's' se deseja continuar: \n");
        continua = getch();
    } while (continua == 's');

    if (contador == 0){
        printf("O bloco NAO foi repetido.");
    } else {
        printf("O bloco foi repetido %d vezes", contador);
    }
}

/*** Complete o codigo observando que:
    A inicialização deve acontecer desde que o continua seja acionado e não encerrado na inicialização. */