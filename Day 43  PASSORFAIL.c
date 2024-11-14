#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);  // Read N, X, and P

        // Calculate the score
        int score = 4 * X - N;

        // Check if Chef passes or fails
        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}
