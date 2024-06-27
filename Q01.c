#include <stdio.h>
#include <math.h>

int potencia(int a, int n){
    int resultado;
    if(n==0){
        return 1; //parada
    }

    else{
        return a * potencia(a, n-1); //recursão
    }
}

int main(){
    int a, n;
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de n: ");
    scanf("%d", &n);
    printf("o resultado é: %d\n", potencia(a, n));
}