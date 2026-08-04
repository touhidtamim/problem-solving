#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, zeros = 0, neg_ones = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x == 0) zeros++;
            if (x == -1) neg_ones++;
        }

        int ops = zeros;
        if ((neg_ones % 2) != 0) {
            ops++;
        }
        
        printf("%d\n", ops);
    }
    return 0;
}