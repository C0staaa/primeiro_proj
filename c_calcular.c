#include <stdio.h>

int sum(int n1, int n2){
    return n1 + n2;
}

int subtrair(int n1, int n2){
    return n1 - n2;
}
int main(){

    int n1, n2;
    printf("Insira dois valores inteiros separados por espaço: ");
    scanf("%d %d", &n1, &n2);

    int soma = sum(n1, n2);
    int subtracao = subtrair(n1, n2);
    printf("A soma é %d", soma);
    printf("A subtração é %d", subtrair);

    return 0;
}