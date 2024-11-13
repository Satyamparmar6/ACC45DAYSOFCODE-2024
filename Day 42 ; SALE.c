#include <stdio.h>

int main() {
    int T;
    // Read number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        int A, B, C;
        // Read the prices of the three items
        scanf("%d %d %d", &A, &B, &C);
        
        // Calculate the total price Chef has to pay
        int total_price = A + B + C - (A < B ? (A < C ? A : C) : (B < C ? B : C));
        
        // Output the result
        printf("%d\n", total_price);
    }
    
    return 0;
}
