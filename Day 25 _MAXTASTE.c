#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        // Read tastiness values
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculate the four possible combinations
        int tastiness1 = a + c;
        int tastiness2 = a + d;
        int tastiness3 = b + c;
        int tastiness4 = b + d;
        
        // Find the maximum tastiness
        int max_tastiness = tastiness1;
        if (tastiness2 > max_tastiness) max_tastiness = tastiness2;
        if (tastiness3 > max_tastiness) max_tastiness = tastiness3;
        if (tastiness4 > max_tastiness) max_tastiness = tastiness4;
        
        // Print the result for this test case
        printf("%d\n", max_tastiness);
    }
    
    return 0;
}
