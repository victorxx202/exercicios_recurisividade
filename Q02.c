#include <stdio.h>

int  potencia(int a, int n){
    
    if(n==0)
        return 1; //parada
    
    int recurso = potencia(a, n/2);
    
    if(n%2==0)
        return recurso * recurso; //recursão
    
    else
        return a * recurso * recurso; //recursão
}

int main(){
    int a, n;
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de n: ");
    scanf("%d", &n);
    printf("o resultado é: %d\n", potencia(a, n));
}