#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf ("Informe um número: ");
    scanf ("%d", &n);
    if (n > 10) {
        printf ("%d eh maior que 10", n);
    } else {
        printf ("%d eh menor que 10", n);
    }

    return 0;
}