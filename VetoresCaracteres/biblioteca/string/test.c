#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // char w1[15] = "Fundamentos";
    // char w2[15] = "Fundamentos";

    // if (strcmp(w1, w2) == 0)
    // {
    //     printf("São iguais\n");
    // }
    // else
    // {
    //     printf("São diferentes\n");
    // }

    const char any[50] = "https://www.google.com";
    const char key = '.';
    char *ret;

    ret = strchr(any, key);

    printf("%c\n", *ret);

    return 0;
}