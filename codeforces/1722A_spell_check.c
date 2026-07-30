#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        char s[15];
        scanf("%d %s", &n, s);

        if (n != 5) {
            printf("NO\n");
            continue;
        }

        int T = 0, i_c = 0, m = 0, u = 0, r = 0;

        for (int j = 0; j < 5; j++) {
            if (s[j] == 'T') T++;
            if (s[j] == 'i') i_c++;
            if (s[j] == 'm') m++;
            if (s[j] == 'u') u++;
            if (s[j] == 'r') r++;
        }

        if (T == 1 && i_c == 1 && m == 1 && u == 1 && r == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}