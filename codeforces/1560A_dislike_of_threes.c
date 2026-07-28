#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int k;
        scanf("%d", &k);

        int count = 0;
        for (int x = 1; ; x++) { 
            if (x % 3 != 0 && x % 10 != 3) {
                count++;
            }
            if (count == k) {
                printf("%d\n", x);
                break;
            }
        }
    }

    return 0;
}