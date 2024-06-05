#include <stdio.h>
int main(void){
    char letra;
    int num, soma;
    printf("\nDigite um numero:");
    scanf("%d", &num);
    printf("o valor da variavel 'num' e %d\n",num);
    soma = num + 5;
    printf("o valor da soma e: %d\n",soma);

    while (getchar() != '\n');

    printf("Agora digite uma letra\n");
    scanf("%c", &letra);
    printf("O valor da letra e: %c\n",letra);
    return 0;
}
