#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int a, b, c, d;
        // Read tastiness values of the ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the maximum tastiness
        int max_tastiness = (a > b ? a : b) + (c > d ? c : d);
        
        // Print the result
        printf("%d\n", max_tastiness);
    }

    return 0;
}
