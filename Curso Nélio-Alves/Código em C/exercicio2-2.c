#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if(a == 0){
        printf("Impossivel calcular");
    }else{
        delta = pow(b, 2) - 4 * a * c;
        if(delta < 0){
            printf("Impossivel calcular");
        }else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("X1 = %.5f\n", x1);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("X2 = %.5f\n", x2);
        }
    }
    return 0;
}