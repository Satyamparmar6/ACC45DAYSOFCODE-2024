#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);
        
        // Check for valid K
        if (K <= 0) {
            printf("K must be positive\n");
            continue;
        }

        int distance = abs(B - A);
        int steps = (distance + K - 1) / K;  // Calculate steps using integer math
        printf("%d\n", steps);
    }
    return 0;
}
