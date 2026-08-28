#include <stdio.h>

int main() {
    int L, C, R1, R2;
    while (scanf("%d %d %d %d", &L, &C, &R1, &R2) && L) {
        int dx = L - R1 - R2, dy = C - R1 - R2;
        if (2 * R1 <= L && 2 * R1 <= C && 2 * R2 <= L && 2 * R2 <= C &&
            dx * dx + dy * dy >= (R1 + R2) * (R1 + R2))
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
