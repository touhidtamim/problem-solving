#include <stdio.h>

int main() {
    int x;
    int steps;

    scanf("%d", &x);

    steps = x / 5;
    
    if (x % 5 != 0) {
        steps = steps + 1;
    }

    printf("%d\n", steps);

    return 0;
}