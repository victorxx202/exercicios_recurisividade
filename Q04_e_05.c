#include <stdio.h>

int fatorial(int n){
    if(n==0){
        return 1; //parada
    }
    else{
        return n * fatorial(n-1); //recursão
    }
}

int main(){
    int n;
    printf("digite o valor de n: ");
    scanf("%d", &n);
    printf("o fatorial de %d é: %d\n", n, fatorial(n));
    return 0;
}