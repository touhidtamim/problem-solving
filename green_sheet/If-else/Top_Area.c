#include <stdio.h>

int main() {
    char O;
    double M[12][12], sum = 0;
    int count = 0;

    scanf(" %c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);

            if (j > i && j < 11 - i) {
                sum += M[i][j];
                count++;
            }
        }
    }

    if (O == 'M') {
        sum /= count;
    }

    printf("%.1lf\n", sum);

    return 0;
}
