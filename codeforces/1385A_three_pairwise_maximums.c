#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        if (x > y) { int temp = x; x = y; y = temp; }
        if (y > z) { int temp = y; y = z; z = temp; }
        if (x > y) { int temp = x; x = y; y = temp; }

        if (y == z) {
            printf("YES\n%d %d %d\n", x, x, z);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}