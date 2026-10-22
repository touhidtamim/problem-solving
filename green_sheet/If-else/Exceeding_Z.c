#include <stdio.h>

int main() {
    int X, Z, sum = 0, count = 0;

    scanf("%d", &X);

    do {
        scanf("%d", &Z);
    } while (Z <= X);

    while (sum <= Z) {
        sum += X;
        X++;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
