#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, spaces, hash;

    do
    {
        height = get_int("Digite um número de 1 a 8:\n");
    }
    //      Loop para solicitar ao usuário um número inteiro de 1 a 8
    while (height <= 0 || height > 8);

    for (int i = 0; i < height ; i++)
    {
        //      Loop para imprimir espaços
        for (spaces = (height - i); spaces >= 2; spaces--)
        {
            printf(" ");
        }
        //      Loop para imprimir as hashes
        for (hash = 0; hash <= i; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
