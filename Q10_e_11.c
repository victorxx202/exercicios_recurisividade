#include <stdio.h>
#include <locale.h>

// Função recursiva para calcular o n-ésimo termo de uma PA
int pa(int a, int d, int n) {
    if (n == 1)
        return a; //parada
    else
        return pa(a, d, n - 1) + d; //recursão
}

int main() {
    setlocale(LC_ALL, "pt.BR.utf8");
    int a, d, n;
    printf("Digite o primeiro termo (a): ");
    scanf("%d", &a);
    printf("Digite a razão (d): ");
    scanf("%d", &d);
    printf("Digite o número do termo desejado (n): ");
    scanf("%d", &n);
    printf("O %d-ésimo termo da PA é: %d\n", n, pa(a, d, n));
    return 0;
}
