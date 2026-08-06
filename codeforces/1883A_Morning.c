#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++) {
        char s[5];
        scanf("%s", s);

        int curr = 1;
        int time = 4;

        for (int i = 0; i < 4; i++) {
            int digit = s[i] - '0';
            if (digit == 0) digit = 10;

            time += abs(digit - curr);
            curr = digit;
        }

        printf("%d\n", time);
    }

    return 0;
}