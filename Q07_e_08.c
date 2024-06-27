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
    printf("o fibonacci de %d é: %d\n", n, fibonacci(n));
    return 0;
}