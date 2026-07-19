#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int officers = 0;
    int untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        int event;
        scanf("%d", &event);

        if (event == -1) {
            if (officers > 0) {
                officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            officers += event;
        }
    }

    printf("%d\n", untreated_crimes);

    return 0;
}