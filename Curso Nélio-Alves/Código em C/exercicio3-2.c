#include <stdio.h>

int main(){
    int X, n, in = 0, out = 0;
    scanf("%d", &X);
    for(int i=0; i<X; i++){
        scanf("%d", &n);
        if(n>=10 && n<=20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
}