#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        if (N < 0) {
            printf("Invalid input\n");
            continue;
        }
        if (is_prime(N)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
