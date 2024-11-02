#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of players

        // Calculate the number of choices for captain and vice-captain
        int choices = N * (N - 1);
        
        // Output the result
        printf("%d\n", choices);
    }

    return 0;
}
