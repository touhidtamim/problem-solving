#include <stdio.h>

int main() {
    int age, sum = 0, count = 0;

    while (1) {
        scanf("%d", &age);

        if (age < 0)
            break;

        sum += age;
        count++;
    }

    printf("%.2f\n", (float)sum / count);

    return 0;
}
