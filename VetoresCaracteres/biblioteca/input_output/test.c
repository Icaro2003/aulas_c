#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char letter;
    // printf("Informe um caractere: ");
    // letter = getchar();

    // printf("O caractere: %c", letter);

    // char word[] = " ";
    // printf("Informe uma palavra: ");
    // fgets(word, 10, stdin);

    // printf("Palavra digitada: %s", word);

    char phrase[25];

    printf("Informe uma frase: ");
    fgets(phrase, 25, stdin);
    
    puts(phrase);

    system("pause");
    return 0;
}