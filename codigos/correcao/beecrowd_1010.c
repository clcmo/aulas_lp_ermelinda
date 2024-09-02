#include <stdio.h>
 
int main() {
 
    int cod_peca1, cod_peca2, qt_peca1, qt_peca2;
    double valor_peca1, valor_peca2, total;
    
    scanf("%d %d %lf", &cod_peca1, &qt_peca1, &valor_peca1);
    scanf("%d %d %lf", &cod_peca2, &qt_peca2, &valor_peca2);
    
    total = (qt_peca1 * valor_peca1) + (qt_peca2 * valor_peca2);
 
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}