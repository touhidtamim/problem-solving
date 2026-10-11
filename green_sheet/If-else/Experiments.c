
#include <stdio.h>

int main() {
    int N, amount;
    int C = 0, R = 0, S = 0, total;

    char type;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %c", &amount, &type);

        if (type == 'C')
            C += amount;
        else if (type == 'R')
            R += amount;
        else if (type == 'S')
            S += amount;
    }

    total = C + R + S;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);

    printf("Percentual de coelhos: %.2f %%\n", C * 100.0 / total);
    printf("Percentual de ratos: %.2f %%\n", R * 100.0 / total);
    printf("Percentual de sapos: %.2f %%\n", S * 100.0 / total);

    return 0;
}
