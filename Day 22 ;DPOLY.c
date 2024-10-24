#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Number of terms in the polynomial
        scanf("%d", &N);

        int degree = -1;  // Initialize to -1 to indicate no non-zero coefficients found
        for (int i = 0; i < N; i++) {
            int coefficient;
            scanf("%d", &coefficient);  // Read the coefficient

            // Update degree if coefficient is non-zero
            if (coefficient != 0) {
                degree = i;  // Update the degree to the current index
            }
        }

        printf("%d\n", degree);  // Print the degree of the polynomial
    }

    return 0;
}
