#include <stdio.h>
int main()
{
    int vetor[5];
    vetor[0] = 3;
    vetor[1] = 4;
    vetor[2] = 1;
    vetor[3] = 5;
    vetor[4] = 2;
    for (int i = 0; i < 5; i++)
    {
        printf("o valor da posicao do vetor %d: e igual a %d\n", i, vetor[i]);
    }
    
    return 0;
}
