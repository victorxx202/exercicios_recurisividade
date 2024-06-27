#include <stdio.h>
#include <math.h>

double calculoPG(int n, int q){
    int calculo=0;
    if(n == 1){
        return 1.0;
    }else {
        return pow(q, n-1) * calculoPG(n - 1, q);
    }
}

int main(){

    int termo;
    int razao;

    scanf("%d", &termo);
    scanf("%d", &razao);

    printf("RESULTADO : %lf", calculoPG(termo, razao));

    return 0;
}