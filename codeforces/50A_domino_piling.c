#include <stdio.h>

int main() {
    int M, N;
    int total_squares, max_dominoes;

    scanf("%d %d", &M, &N);

    total_squares = M * N;
    max_dominoes = total_squares / 2;

    printf("%d\n", max_dominoes);

    return 0;
}