#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[50];
    int n;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("Digite uma palavra: ");
    scanf("%s", word);

    for (int i = 0; i < n; i++)
    {
        printf("%c\n", word[i]);
    }

    system("pause");
    return 0;
}