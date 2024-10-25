#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int start38Count = 0, ltime108Count = 0;
        char contestCode[10];
        
        for (int i = 0; i < N; i++) {
            scanf("%s", contestCode);
            
            if (strcmp(contestCode, "START38") == 0) {
                start38Count++;
            } else if (strcmp(contestCode, "LTIME108") == 0) {
                ltime108Count++;
            }
        }
        
        printf("%d %d\n", start38Count, ltime108Count);
    }
    
    return 0;
}

