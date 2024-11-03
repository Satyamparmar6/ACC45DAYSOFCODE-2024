#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rounds

    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        scanf("%d %d", &score1, &score2);  // Read scores for the round

        cumulative_score1 += score1;  // Update cumulative score for Player 1
        cumulative_score2 += score2;  // Update cumulative score for Player 2

        // Determine current leader and lead
        int lead, current_winner;
        if (cumulative_score1 > cumulative_score2) {
            lead = cumulative_score1 - cumulative_score2;
            current_winner = 1;
        } else {
            lead = cumulative_score2 - cumulative_score1;
            current_winner = 2;
        }

        // Update max lead and winner if this lead is greater than the previous max lead
        if (lead > max_lead) {
            max_lead = lead;
            winner = current_winner;
        }
    }

    // Print the winner and the maximum lead
    printf("%d %d\n", winner, max_lead);
    return 0;
}
