#include <stdio.h>

int main() {
    int T, P, Q;
    
    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read points P and Q
        scanf("%d %d", &P, &Q);
        
        // Calculate total points
        int total_points = P + Q;
        
        // Check if half of the total points is even
        if ((total_points / 2) % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    
    return 0;
}
