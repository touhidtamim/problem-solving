#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        int giver[101];
        
        for (int i = 1; i <= n; i++) {
            int p_i;
            scanf("%d", &p_i);
            giver[p_i] = i;
        }
        
        for (int i = 1; i <= n; i++) {
            printf("%d%c", giver[i], (i == n) ? '\n' : ' ');
        }
    }
    
    return 0;
}