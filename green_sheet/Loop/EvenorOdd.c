#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);

        if (m == 0) {
            printf("NULL\n");
        } else {
            if (m % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if (m > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}
