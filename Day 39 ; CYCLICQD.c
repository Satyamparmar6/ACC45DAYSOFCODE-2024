#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C, D;
        // Read angles
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
        // Check if the quadrilateral is cyclic
        if ((A + C == 180) && (B + D == 180)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
