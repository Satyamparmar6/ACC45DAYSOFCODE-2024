#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the size of the array

        int count1 = 0, countNeg1 = 0;
        for (int i = 0; i < N; i++) {
            int value;
            scanf("%d", &value); // Read each element of the array
            if (value == 1) {
                count1++;
            } else {
                countNeg1++;
            }
        }

        // Calculate the sum S = count1 - countNeg1
        int S = count1 - countNeg1;

        // Check if S is odd
        if (S % 2 != 0) {
            printf("-1\n"); // It's not possible to make the sum 0
        } else {
            // Minimum flips needed to make the sum zero
            int flips = abs(S) / 2;
            printf("%d\n", flips);
        }
    }

    return 0;
}
