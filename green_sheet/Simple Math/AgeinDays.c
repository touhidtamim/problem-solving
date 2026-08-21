#include <stdio.h>

int main() {
    int total_days;
    int years, months, days;

    scanf("%d", &total_days);

    years = total_days / 365;
    total_days = total_days % 365;

    months = total_days / 30;
    days = total_days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
