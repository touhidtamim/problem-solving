#include <stdio.h>

int main() {
    char ch;
    int lucky_count = 0;

    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (ch == '4' || ch == '7') {
            lucky_count++;
        }
    }
    
    if (lucky_count == 4 || lucky_count == 7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}