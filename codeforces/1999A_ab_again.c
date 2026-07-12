#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        for (int i = 0; i < t; i++) {
            int n;
            scanf("%d", &n);
            
            int sum = 0;
            for (int temp = n; temp > 0; temp /= 10) {
                sum += temp % 10;
            }
            
            printf("%d\n", sum);
        }
    }
    return 0;
}