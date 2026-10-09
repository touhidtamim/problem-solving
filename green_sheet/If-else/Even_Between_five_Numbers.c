#include <stdio.h>

int main() {
    int n, even = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            even++;
        }
    }

    printf("%d valores pares\n", even);

    return 0;
}
