#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int min_ops = 100000;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        val = abs(val);
        if (val < min_ops) {
            min_ops = val;
        }
    }

    printf("%d\n", min_ops);
    return 0;
}