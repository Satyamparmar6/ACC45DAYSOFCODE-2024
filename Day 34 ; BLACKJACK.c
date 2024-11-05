#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int C = 21 - (A + B); // Calculate the required third number
        
        // Check if C is in the range [1, 10]
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);
        } else {
            printf("-1\n"); // Not possible to win
        }
    }
    
    return 0;
}
