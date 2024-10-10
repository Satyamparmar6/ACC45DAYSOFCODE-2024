#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        long long X, Y; // Number of problems submitted and approved
        scanf("%lld %lld", &X, &Y);
        
        // Check if Y is at least 50% of X
        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
