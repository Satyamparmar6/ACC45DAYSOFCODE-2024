#include <stdio.h>
#include <stdlib.h> // For the abs() function

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read the positions of policeman and thief

        int time = abs(X - Y); // Calculate the minimum time to catch the thief
        printf("%d\n", time); // Output the result for each test case
    }

    return 0;
}