#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of odd and even indexed episodes
        int odd_count = (N + 1) / 2; // Count of odd-indexed episodes
        int even_count = N / 2;      // Count of even-indexed episodes
        
        // Calculate total duration
        int total_duration = odd_count * B + even_count * A;
        
        // Print the result for this test case
        printf("%d\n", total_duration);
    }
    
    return 0;
}
