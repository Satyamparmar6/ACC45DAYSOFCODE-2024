#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases); // Read number of test cases

    for (int i = 0; i < testCases; i++) {
        int bucket1, bucket2, bucket3;
        scanf("%d %d %d", &bucket1, &bucket2, &bucket3); // Read the bucket values

        // Check the sum of the buckets
        if (bucket1 + bucket2 + bucket3 < 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}
