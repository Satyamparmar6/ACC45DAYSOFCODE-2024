#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds needed
        int rounds = (int)ceil(log2(N)); // Use ceil to handle non-power of 2
        int total_time = rounds * A; 
        
        // Add time for subsequent rounds if applicable
        if (rounds > 1) {
            total_time += (rounds - 1) * B;
        }

        printf("%d\n", total_time);
    }
    return 0;
}
