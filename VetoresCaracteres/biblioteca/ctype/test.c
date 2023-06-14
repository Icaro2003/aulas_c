#include <stdio.h>
#include <ctype.h>

int main()
{
    char key, key_t;

    printf("Digite um caracter: ");
    scanf("%c", &key);

    if (isupper(key))
    {
        key_t = tolower(key);
    }
    else if (islower(key))
    {
        key_t = toupper(key);
    }
    else
    {
        printf("Caractere incorreto!");
    }
    

    printf("%c\n", key_t);

    return 0;
}