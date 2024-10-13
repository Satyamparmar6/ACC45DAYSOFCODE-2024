#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Weight of the pulp in kg
        scanf("%d", &N);
        
        // Calculate the number of notebooks (1000 pages per kg, 100 pages per notebook)
        int notebooks = (N * 1000) / 100; 
        
        // Output the result for the current test case
        printf("%d\n", notebooks);
    }
    
    return 0;
}
