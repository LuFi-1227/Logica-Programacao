#include <stdio.h>

int main(){
    int cod1, quant;
    float total = 0;

    scanf("%d", &cod1);
    scanf("%d", &quant);

    switch (cod1)
    {
    case 1:
        total = 4.00 * quant;
        break;
    case 2:
        total = 4.50 * quant;
        break;
    case 3:
        total = 5.00 * quant;
        break;
    case 4:
        total = 2.00 * quant;
        break;
    case 5:
        total = 1.50 * quant;
        break;
    }

    printf("Total: R$ %.2f", total);
    return 0;
}