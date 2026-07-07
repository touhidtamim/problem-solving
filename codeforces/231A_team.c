#include <stdio.h>

int main() {
    int n, count = 0;
    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}