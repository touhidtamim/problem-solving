#include <stdio.h>

int main() {
    int n, h;
    scanf("%d %d", &n, &h);

    int total_width = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a > h) {
            total_width += 2;
        } else {
            total_width += 1;
        }
    }

    printf("%d\n", total_width);

    return 0;
}