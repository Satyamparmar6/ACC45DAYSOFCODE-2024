#include <stdio.h>

int main() {
    int T, N, X, Total_cost;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++) 
    {
        scanf("%d %d", &N, &X);

        if(N % 6 == 0) 
        {
            Total_cost = (N / 6) * X;
        } else {
            Total_cost = ((N / 6) + 1) * X;
        }

        printf("%d\n", Total_cost);  // Output the total cost
    }

    return 0;
}