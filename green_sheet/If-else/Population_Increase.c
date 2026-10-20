#include <stdio.h>

int main() {
    int T, PA, PB, years;
    double G1, G2;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        years = 0;

        while (PA <= PB && years <= 100) {
            PA = (int)(PA * (1 + G1 / 100));
            PB = (int)(PB * (1 + G2 / 100));
            years++;
        }

        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}
