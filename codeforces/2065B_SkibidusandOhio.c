#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[105];
        scanf("%s", s);
        
        int len = strlen(s);
        int ans = len;
        
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == s[i + 1]) {
                ans = 1;
                break;
            }
        }
        
        printf("%d\n", ans);
    }
    return 0;
}