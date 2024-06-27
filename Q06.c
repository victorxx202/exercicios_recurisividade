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
    int n = 3;
    /*
    n!=0, entra na primeira chamada recursiva, n = 2
    n!=0, entra na segunda chamada recursiva, n = 1
    n!=0, entra na terceira chamada recursiva, n = 0
    n==0, retorna 1
    */
   
    printf("o fatorial de %d é: %d\n", n, fatorial(n));
    return 0;
}