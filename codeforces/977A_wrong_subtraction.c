#include <stdio.h>

int main() {
    long long n;
    int k;
    
    if (scanf("%lld %d", &n, &k) == 2) {
        for (int i = 0; i < k; i++) {
            if (n % 10 == 0) {
                n /= 10;
            } else {
                n--;
            }
        }
        printf("%lld\n", n);
    }
    
    return 0;
}