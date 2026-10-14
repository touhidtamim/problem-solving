#include <stdio.h>

int main(void) {
    int password;

    while (scanf("%d", &password) == 1) {
        if (password == 2002) {
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
    }

    return 0;
}
