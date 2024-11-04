#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of bits taken by the program
        scanf("%d", &N);
        
        // Check if N is divisible by 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}
