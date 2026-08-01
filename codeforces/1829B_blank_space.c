#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int max_len = 0, current = 0;
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (x == 0) {
                current++;
                if (current > max_len) {
                    max_len = current;
                }
            } else {
                current = 0;
            }
        }
        printf("%d\n", max_len);
    }
    return 0;
}