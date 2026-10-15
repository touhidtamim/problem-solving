
#include <stdio.h>

int main() {
    int inter, gremio, choice;
    int grenais = 0, interWins = 0, gremioWins = 0, draws = 0;

    do {
        scanf("%d %d", &inter, &gremio);

        grenais++;

        if (inter > gremio)
            interWins++;
        else if (gremio > inter)
            gremioWins++;
        else
            draws++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", interWins);
    printf("Gremio:%d\n", gremioWins);
    printf("Empates:%d\n", draws);

    if (interWins > gremioWins)
        printf("Inter venceu mais\n");
    else if (gremioWins > interWins)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}
