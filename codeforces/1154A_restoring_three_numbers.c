#include <stdio.h>

int main() {
    long long x[4];
    for (int i = 0; i < 4; i++) {
        scanf("%lld", &x[i]);
    }

    int max_idx = 0;
    for (int i = 1; i < 4; i++) {
        if (x[i] > x[max_idx]) {
            max_idx = i;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (i != max_idx) {
            printf("%lld ", x[max_idx] - x[i]);
        }
    }

    return 0;
}