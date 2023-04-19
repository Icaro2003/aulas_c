#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int passwd, newpasswd;

    do
    {
        printf("Informe sua senha: ");
        scanf("%d", &passwd);

        printf("Informe sua senha novamente: ");
        scanf("%d", &newpasswd);

        if (passwd == newpasswd)
        {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("As senhas diferentes!\n\n");
        }
        
    } while (passwd != newpasswd);

    system("pause");
    return 0;
}