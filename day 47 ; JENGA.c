#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N and X for each test case

        // Check if the game is valid
        if (X >= N && X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
