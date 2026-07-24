#include <stdio.h>

int main() {
    int n, p, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &p);
        sum += p;
    }

    printf("%.12f\n", (double)sum / n);
    return 0;
}