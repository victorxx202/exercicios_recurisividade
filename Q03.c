#include <stdio.h>

int  potencia(int a, int n){
    
    if(n==0)
        return 1;
    
    int recurso = potencia(a, n/2);
    
    if(n%2==0)
        return recurso * recurso;
    
    else
        return a * recurso * recurso;
}

int main(){
    int a = 2;
    int n = 3;
    /*
    inicialmente, a = 2 e n = 3
    primeira chamada recursiva: a = 2 e n = 1, se n!=0, mais uma chamada recursiva
    segunda chamada recursiva: a = 2 e n = 0, se n==0, retorna 1
    */
    printf("o resultado é: %d\n", potencia(a, n));
}