#include <stdio.h>

int main() {
    int test_cases; // Number of test cases
    scanf("%d", &test_cases);

    while (test_cases--) {
        int total_cards, face_up_cards; // Total cards and face-up cards
        scanf("%d %d", &total_cards, &face_up_cards);

        // Cards face-down would be total_cards - face_up_cards
        int face_down_cards = total_cards - face_up_cards;

        // Minimum flips needed to make all cards face the same direction
        int min_flips = (face_up_cards < face_down_cards) ? face_up_cards : face_down_cards;

        printf("%d\n", min_flips);
    }

    return 0;
}
