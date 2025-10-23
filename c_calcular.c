#include <stdio.h>

int sum(int n1, int n2){
    return n1 + n2;
}

int subtrair(int n1, int n2){
    return n1 - n2;
}

float div(int n1, int n2){
    if (n1 == 0 || n2 == 0){
        printf("Erro! \n");
        return 0;
    } else {
        return n1 / n2;
    }
}

int multi(int n1, int n2){
    return n1 * n2;
}

int main(){

    int n1, n2;
    printf("Insira dois valores inteiros separados por espaço: ");
    scanf("%d %d", &n1, &n2);

    int soma = sum(n1, n2);
    printf("A soma é %d \n", soma);

    int subtracao = subtrair(n1, n2);
    printf("A subtração é %d \n", subtracao);

    float divisao = div(n1, n2);
    printf("A divisão é %2.f \n", divisao);

    int multiplicacao = multi(n1, n2);
    printf("A multiplicação é %d", multiplicacao);

    return 0;
}