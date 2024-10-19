#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M); // Read N, K, M for each test case

        // Calculate the maximum candies that can be stored in one bag
        int maxCandiesPerBag = K * M;

        // Calculate the minimum number of bags required
        int bagsNeeded = (N + maxCandiesPerBag - 1) / maxCandiesPerBag; // Equivalent to ceil(N / maxCandiesPerBag)

        // Print the result for this test case
        printf("%d\n", bagsNeeded);
    }

    return 0;
}
