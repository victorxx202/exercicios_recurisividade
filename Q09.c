int fibonacci(int n){
    if(n==0)
        return 0; //parada

    else if(n==1)
        return 1; //parada

    else
        return fibonacci(n-1) + fibonacci(n-2); //recursão
}
int main(){
    int n;
    printf("digite o valor de n: ");
    scanf("%d", &n);

    /*
    caso negativo, o programa irá entrar em loop infinito, pois a função fibonacci irá chamar a si mesma com valores negativos
    caso n seja 0, a função irá retornar 0
    caso n seja 1, a função irá retornar 1
    caso n seja maior que 1, a função irá retornar a soma dos dois valores anteriores
    a pilha de chamadas irá se formar da seguinte forma:
    fibonacci(x) = fibonacci(x-1) + fibonacci(x-2)
    */
    printf("o fibonacci de %d é: %d\n", n, fibonacci(n));
    return 0;
}