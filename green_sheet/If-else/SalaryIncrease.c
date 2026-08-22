#include <stdio.h>

int main() {
    float s, new_s, inc;
    int p;

    scanf("%f", &s);

    if (s >= 0 && s <= 400.00) {
        p = 15;
    } else if (s <= 800.00) {
        p = 12;
    } else if (s <= 1200.00) {
        p = 10;
    } else if (s <= 2000.00) {
        p = 7;
    } else {
        p = 4;
    }

    inc = s * (p / 100.0);
    new_s = s + inc;

    printf("Novo salario: %.2f\n", new_s);
    printf("Reajuste ganho: %.2f\n", inc);
    printf("Em percentual: %d %%\n", p);

    return 0;
}
