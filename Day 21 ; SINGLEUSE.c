#include <stdio.h>

int main() {
    int T, H, X, Y, attacks;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &H, &X, &Y);

        // Calculate initial number of attacks without special attack
        attacks = H / X;
        if (H % X != 0) {
            attacks++;  // Additional attack if there's remaining health
        }

        // Check if the special attack can defeat the enemy
        if (H <= Y) {
            attacks = 1;  // Special attack is enough to defeat the enemy
        } else {
            int special_attacks = (H - Y) / X;
            if ((H - Y) % X != 0) {
                special_attacks++;  // Additional attack needed after special attack
            }
            // Choose the smaller attack count
            if (special_attacks + 1 < attacks) {
                attacks = special_attacks + 1;  // +1 for the special attack
            }
        }

        printf("%d\n", attacks);
    }

    return 0;
}



