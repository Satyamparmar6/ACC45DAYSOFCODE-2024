#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, A, B; // Required points, easy problems solved, hard problems solved
        scanf("%d %d %d", &X, &A, &B);
        
        // Calculate total score
        int total_score = A + 2 * B;
        
        // Check if Chef qualifies
        if (total_score >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }
    
    return 0;
}
