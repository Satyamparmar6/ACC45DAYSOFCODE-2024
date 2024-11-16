#include <stdio.h>

int main() {
    int T, N;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Loop over each test case
    for(int t = 0; t < T; t++) {
        // Read the number of gifts Chef wants to buy for this test case
        scanf("%d", &N);
        
        // Calculate the minimum number of coins needed
        int fullSets = N / 5;  // Number of complete sets of 5 gifts
        int remainingGifts = N % 5;  // Remaining gifts that don't form a complete set of 5
        
        // Chef pays for 4 gifts in each complete set of 5
        int coinsRequired = fullSets * 4;
        
        // Chef pays for all remaining gifts if there are any
        coinsRequired += remainingGifts;
        
        // Output the result for this test case
        printf("%d\n", coinsRequired);
    }
    
    return 0;
}
