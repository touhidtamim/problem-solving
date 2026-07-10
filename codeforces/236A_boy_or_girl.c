#include <stdio.h>
#include <string.h>

int main() {
    char name[101];
    int count = 0;

    scanf("%s", name);

    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (name[i] == name[j]) {
                name[j] = '#';
            }
        }
    }

    for (int i = 0; i < len; i++) {
        if (name[i] != '#') {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}