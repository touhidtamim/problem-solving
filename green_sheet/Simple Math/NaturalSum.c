#include <stdio.h>

int main() {
    long long int A, B;

    scanf("%lld %lld", &A, &B);

    long long int total_sum = (B - A + 1) * (A + B) / 2;

    printf("%lld\n", total_sum);
    return 0;
}
