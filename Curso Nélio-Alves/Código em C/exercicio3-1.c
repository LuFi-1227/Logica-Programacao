#include <stdio.h>

int main(){
    int senha = 2002;
    int tent;

    scanf("%d", &tent);

    while(tent != senha){
        printf("Senha Invalida\n");
        scanf("%d", &tent);
    }

    printf("Acesso Permitido\n");
    return 0;
}