#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Read current scores A and B
        scanf("%d %d", &C, &D); // Read target scores C and D

        // Check if the target scores can be reached
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
