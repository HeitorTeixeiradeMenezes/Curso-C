#include <stdio.h>

int soma(int a, int b){
    int s = a + b;
    return s;
}

int sub(int a, int b){
    int s = a - b;
    return s;
}

int main()
{
    int n1, n2, op, res;
    int opValid = 1;
    printf("Digite um valor:\n");
    scanf("%d", &n1);
    printf("Digite um valor:\n");
    scanf("%d", &n2);
    printf("escolha a operacao:\n1-adicao \n2-subtracao\n");
    scanf("%d", &op);
    if (op == 1)
    {
        res = soma(n1, n2);
    }
    else if (op == 2)
    {
        res = sub(n1, n2);
    } else{
        printf("Valor da op invalido\n");
        opValid = 0;
    }
    if (opValid)
    {
        printf("O resultado foi igual a %d\n", res);
    }
    
    return 0;
}
