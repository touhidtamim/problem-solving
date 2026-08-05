#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int neg = 0, zero = 0;
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (x == -1) neg++;
            if (x == 0) zero++;
        }

        int ops = zero;
        if (neg % 2 != 0) {
            ops += 2;
        }

        printf("%d\n", ops);
    }

    return 0;
}