#include <stdio.h>
 
int main() {

    int cod_peca[2], qt_peca[2], i;
    double valor_peca[2], total_parc[2], total;

    for(int i=0; i<2; i++){
        printf("Informe o código da peca, a quantidade e o valor da mesma: \n");
        scanf("%d %d %lf", &cod_peca[i], &qt_peca[i], &valor_peca[i]);

        total_parc[i] = (qt_peca[i] * valor_peca[i]);
        
        total = total_parc[i-1] + total_parc[i];
    }
 
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}