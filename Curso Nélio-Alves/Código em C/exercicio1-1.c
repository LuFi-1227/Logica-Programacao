#include <stdio.h>

int main(){
    int codigo_peca1, num_pecas1, codigo_peca2, num_pecas2;
    float valor_pecas1, valor_pecas2, total = 0;
        scanf("%d", &codigo_peca1);
        scanf("%d", &num_pecas1);
        scanf("%f", &valor_pecas1);

        scanf("%d", &codigo_peca2);
        scanf("%d", &num_pecas2);
        scanf("%f", &valor_pecas2);

        total = num_pecas2 * valor_pecas2 + num_pecas1 * valor_pecas1;
    
    printf("VALOR A PAGAR: %.2f", total);
    return 0;
}