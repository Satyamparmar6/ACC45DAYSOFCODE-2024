#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases
    
    while (T--) { // Process each test case
        int N, K, count = 0; // Number of characteristics, K value, and count of valid characteristics
        scanf("%d %d", &N, &K); // Read N and K
        
        for (int i = 0; i < N; i++) { // Loop through each characteristic
            int characteristic;
            scanf("%d", &characteristic); // Read the characteristic
            
            // Check if (characteristic + K) is divisible by 7
            if ((characteristic + K) % 7 == 0) {
                count++; // Increment count if condition is met
            }
        }
        printf("%d\n", count); // Output the count for the current test case
    }
    
    return 0; // End of program
}
