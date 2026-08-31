#include <stdio.h>

int main() {
    int d1, h1, m1, s1, d2, h2, m2, s2;

    scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d", &d1, &h1, &m1, &s1, &d2, &h2, &m2, &s2);

    int s = s2 - s1;
    int m = m2 - m1;
    int h = h2 - h1;
    int d = d2 - d1;

    if (s < 0) {
        s += 60;
        m--;
    }
    if (m < 0) {
        m += 60;
        h--;
    }
    if (h < 0) {
        h += 24;
        d--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
    return 0;
}
