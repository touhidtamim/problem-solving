#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int groups = 1; 
    int prev, curr;

    scanf("%d", &prev);

    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);

        if (curr != prev) {
            groups++;   
            prev = curr; 
        }
    }

    printf("%d\n", groups);

    return 0;
}