#include <stdio.h>

int count_tuesdays(int N) {
    if (N < 2) {
        return 0;
    }
    return (N - 2) / 7 + 1;
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); // Read the number of spooky days
        printf("%d\n", count_tuesdays(N)); // Output the result
    }
    return 0;
}

